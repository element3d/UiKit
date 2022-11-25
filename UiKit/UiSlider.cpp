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
			if (!mAnimation) mAnimation = new e3::Animation();
			mAnimation->Start(0.1, 1, 1.3, [this](float v){
				mInnerCircle->SetScale(glm::vec3(v), e3::ETransformAlignment::Center);
			}, [this](){
				mAnimation = nullptr;		
			});
	});

	mCircle->SignalOnMouseLeave.Connect([this](e3::MouseEvent* pEvent){
		if (!mAnimation) mAnimation = new e3::Animation();
			mAnimation->Start(0.1, 1.3, 1, [this](float v){
				mInnerCircle->SetScale(glm::vec3(v), e3::ETransformAlignment::Center);
			}, [this](){
				mAnimation = nullptr;		
			});
	});

	mCircle->SignalOnMouseDown.Connect([this](e3::MouseEvent* pEvent){
			mInnerCircle->SetScale(glm::vec3(0.6), e3::ETransformAlignment::Center);
	});

	mCircle->SignalOnMouseUp.Connect([this](e3::MouseEvent* pEvent){
		mInnerCircle->SetScale(glm::vec3(1), e3::ETransformAlignment::Center);
	});
}

void UiSlider::_SetMacOSStyles()
{
	mInnerCircle->SetVisibility(e3::EVisibility::Hidden);
	mBG->SetBackgroundColor(glm::vec4(0, 0, 0, 255 * 0.18));
}

bool UiSlider::OnMouseUp(e3::MouseEvent* pEvent)
{
	if (!mInfoAnimation) mInfoAnimation = new e3::Animation();
	mInfoAnimation->Start(0.2, [this](float v){
		mInfo->SetOpacity(1 - v);
	}, [this](){
		mInfoAnimation = nullptr;
	});
	return true;
}

bool UiSlider::OnMouseDown(e3::MouseEvent* pEvent)
{
	UiSliderBase::OnMouseDown(pEvent);
	float dx = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2;
	mValue->SetScale(glm::vec3(dx, 1, 1), e3::ETransformAlignment::Left);
	mCircle->SetTranslation(glm::vec3(dx, 0, 0));
	if (!mInfoAnimation) mInfoAnimation = new e3::Animation();
	mInfoAnimation->Start(0.2, [this](float v){
		mInfo->SetOpacity(v);
	}, [this](){
		mInfoAnimation = nullptr;
	});
	mInfo->SetTranslation(glm::vec3(pEvent->GetX() - GetGeometry().x - mInfo->GetGeometry().width / 2.0, -e3::Dim("40dp"), 0));
	mNValue = (pEvent->GetX() - GetGeometry().x) / GetGeometry().width * 100;
	mInfoText->SetText(std::to_string(int(mNValue)));
	return true;
}

void UiSlider::OnMouseMove(e3::MouseEvent* pEvent)
{
	UiSliderBase::OnMouseMove(pEvent);
	auto geo = GetGeometry();
	if (pEvent->GetX() <= GetGeometry().x)
	{
		mValue->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
		mCircle->SetTranslation(glm::vec3(-mCircle->GetGeometry().width / 2, 0, 0));
		mInfo->SetTranslation(glm::vec3(-mInfo->GetGeometry().width / 2.0, -e3::Dim("40dp"), 0));
		mNValue = 0;
		mInfoText->SetText(std::to_string(int(mNValue)));
		return;
	}
	else if (pEvent->GetX() >= geo.x + geo.width)
	{
		mValue->SetScale(glm::vec3(geo.width, 1, 1), e3::ETransformAlignment::Left);
		mCircle->SetTranslation(glm::vec3(geo.width - mCircle->GetGeometry().width / 2 , 0, 0));
		mInfo->SetTranslation(glm::vec3(geo.width - mInfo->GetGeometry().width / 2.0, -e3::Dim("40dp"), 0));
		mNValue = 100;
		mInfoText->SetText(std::to_string(int(mNValue)));
		return;
	}
	float dx = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2;
	mValue->SetScale(glm::vec3(dx, 1, 1), e3::ETransformAlignment::Left);
	float trx = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2;
	mCircle->SetTranslation(glm::vec3(trx, 0, 0));
	mInfo->SetTranslation(glm::vec3(pEvent->GetX() - GetGeometry().x  - mInfo->GetGeometry().width / 2.0, -e3::Dim("40dp"), 0));
	mNValue = (pEvent->GetX() - GetGeometry().x) / GetGeometry().width * 100;
	mInfoText->SetText(std::to_string(int(mNValue)));
}