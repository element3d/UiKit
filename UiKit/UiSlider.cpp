#include "UiSlider.h"
#include "UiKit.h"

UiSlider::UiSlider(e3::Element* pParent)
	: UiSliderBase(pParent)
{
	UiKitOS os = UiKit::GetOS();

	switch (os)
	{
	case UiKitOS::MacOS:
		_SetMacOSStyles();
	default:
		break;
	}

	mCircle->SignalOnMouseEnter.Connect([this](e3::MouseEvent* pEvent){
			mInnerCircle->SetScale(glm::vec3(1.4), e3::ETransformAlignment::Center);
	});

	mCircle->SignalOnMouseLeave.Connect([this](e3::MouseEvent* pEvent){
		mInnerCircle->SetScale(glm::vec3(1), e3::ETransformAlignment::Center);
	});

	mCircle->SetOnMouseDownCallback([this](e3::MouseEvent* pEvent){
			mInnerCircle->SetScale(glm::vec3(0.6), e3::ETransformAlignment::Center);
	});

	mCircle->SetOnMouseUpCallback([this](e3::MouseEvent* pEvent){
		mInnerCircle->SetScale(glm::vec3(1), e3::ETransformAlignment::Center);
	});
}

void UiSlider::_SetMacOSStyles()
{
	mInnerCircle->SetVisibility(e3::EVisibility::Hidden);
	mBG->SetBackgroundColor(glm::vec4(0, 0, 0, 255 * 0.18));
}

bool UiSlider::OnMouseDown(e3::MouseEvent* pEvent)
{
	UiSliderBase::OnMouseDown(pEvent);
	float dx = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2;
	mValue->SetScale(glm::vec3(dx, 1, 1), e3::ETransformAlignment::Left);
	mCircle->SetTranslation(glm::vec3(dx, 0, 0));
	return true;
}

void UiSlider::OnMouseMove(e3::MouseEvent* pEvent)
{
	UiSliderBase::OnMouseMove(pEvent);
	mCircle->SetTranslation(glm::vec3(pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2, 0, 0));
}