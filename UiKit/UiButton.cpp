#include "UiButton.h"
#include "UiKit.h"
#include "UiColor.h"

UiButton::UiButton(e3::Element* pParent)
	: UiButtonBase(pParent)
{
	auto des = UiKit::GetDesign();
	if (des == EUiKitDesign::Material)
	{
		if (mStyle == UiDefault) mRipple->SetBackgroundColor(glm::vec4(98, 0, 238, 0.06 * 255));
		else mRipple->SetBackgroundColor(glm::vec4(255, 255, 255, 0.36 * 255));
	}
}

bool UiButton::OnMouseDown(e3::MouseEvent* pE) 
{
	UiButtonBase::OnMouseDown(pE);
	pE->Stop();
	auto des = UiKit::GetDesign();
	if (des == EUiKitDesign::Material)
	{
	  e3::ShadowParams s;
	  s.BlurSize = 20;
	  s.Color = glm::vec4(0, 0, 0, 255);
	  s.Opacity = 1;
	  s.Offset = glm::vec2(0, 5);
	  s.Scale = 1;
	  SetShadow(s);
	  mRipple->SetOpacity(1);

	  if (!mAnimation) mAnimation = new e3::Animation();
	  
	  mAnimation->Start(0.1, [this](float v) {
		mRipple->SetScale(glm::vec3(v), e3::ETransformAlignment::Center);
		}, [this]() {
		  mAnimation = nullptr;
		});
	}
	else
	{
	  SetOpacity(.85);
	}
	return true;
}

bool UiButton::OnMouseUp(e3::MouseEvent* pE)
{
	auto des = UiKit::GetDesign();
	if (des == EUiKitDesign::Material)
	{
	  if (!mAnimation) mAnimation = new e3::Animation();
	  mAnimation->Start(0.3, GetOpacity(), 0, [this](float v) {
		mRipple->SetOpacity(v);
		}, [this]() {
		  mAnimation = nullptr;
		});
	}
	else
	{
	  SetOpacity(1);
	}
	return UiButtonBase::OnMouseUp(pE);
}
#include <e3/Application.h>
void UiButton::OnMouseEnter(e3::MouseEvent* pE)
{
	UiButtonBase::OnMouseEnter(pE);

	//GetApplication()->SetCursor(e3::ECursor::Hand);
	auto des = UiKit::GetDesign();
	if (des != EUiKitDesign::Material)
	{
		mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 8));
	}
	else 
	{
		if (mStyle == UiDefault)
			mHover->SetBackgroundColor(glm::vec4(98, 0, 238, 0.04 * 255));
	}
}

void UiButton::OnMouseLeave(e3::MouseEvent* pE)
{
  //GetApplication()->SetCursor(e3::ECursor::Arrow);
	UiButtonBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0));
}