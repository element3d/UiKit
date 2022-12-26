#include "UiSwitch.h"
#include "UiKit.h"

UiSwitch::UiSwitch(e3::Element* pParent)
	: UiSwitchBase(pParent)
{
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
		_SetMacOSStyles();
		break;
	case EUiKitDesign::Material:
	{
	  SetWidth("34dp");
	  SetHeight("20dp");
	  SetBorderSize(0);
	  SetPadding(0);
		mBG->SetHeight("14dp");
	  mBG->SetBackgroundColor(glm::vec4(33, 33, 33, 0.08 * 255));
	  mCircle->SetBackgroundColor(glm::vec4(255));
	  e3::ShadowParams s;
	  s.BlurSize = 5;
	  s.Color = glm::vec4(0, 0, 0, 255);
	  s.Offset = glm::vec2(0, 2);
	  s.Opacity = 1;
	  mCircle->SetShadow(s);
	}
	  break;
	default:
		RemoveElement(mHover);
		mHover = nullptr;
		RemoveElement(mBG);
		mBG = nullptr;
		break;
	}
}

void UiSwitch::_SetMacOSStyles()
{
	SetHeight("22dp");
	SetWidth("40dp");
	SetPadding("2dp");
	SetBorderSize(0);
	mCircle->SetBackgroundColor(UiColor::White);
	SetBackgroundColor(glm::vec4(60, 60, 67, 0.18 * 255));
	RemoveElement(mHover);
	mHover = nullptr;
	RemoveElement(mBG);
	mBG = nullptr;
}

void UiSwitch::Check()
{
	mChecked = true;
	auto geo = GetGeometry();
	float dx = geo.width - mCircle->GetGeometry().width - 2 * GetBorderSize() - GetPaddingLeft() - GetPaddingRight();


	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Windows:
	case EUiKitDesign::Apple:
	  SetBackgroundColor(UiColor::Primary);
	  SetBorderSize(0);
	  mCircle->SetBackgroundColor(UiColor::White);
	  break;
	case EUiKitDesign::Material:
	  mCircle->SetBackgroundColor(UiColor::Primary);
	  mBG->SetBackgroundColor(glm::vec4(glm::vec3(UiColor::Primary), 100));
	  break;
	default:

	  break;
	}

	if (!mAnimation) mAnimation = new e3::Animation();
	mAnimation->Start(0.2, e3::EAnimation::EaseInOutQuad, [this, dx](float v){
			mCircle->SetTranslation(glm::vec3(dx * v, 0, 0));
	}, [this](){
		mAnimation = nullptr;
	});
}

void UiSwitch::UnCheck()
{
	mChecked = false;
	auto geo = GetGeometry();
	// float dx = geo.width - mCircle->GetGeometry().width - 2 * GetBorderSize() - GetPaddingLeft() - GetPaddingRight();
	mCircle->SetTranslation(glm::vec3(0, 0, 0));
	

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Windows:
	case EUiKitDesign::Apple:
	  SetBackgroundColor(UiColor::Transparent);
	  SetBorderSize("1dp");
	  mCircle->SetBackgroundColor(glm::vec4(120, 120, 120, 255));
	  break;
	case EUiKitDesign::Material:
	  mCircle->SetBackgroundColor(UiColor::White);
	  mBG->SetBackgroundColor(glm::vec4(180, 180, 180, 255));
	  break;
	default:

	  break;
	}

	float dx = geo.width - mCircle->GetGeometry().width - 2 * GetBorderSize() - GetPaddingLeft() - GetPaddingRight();
	if (!mAnimation) mAnimation = new e3::Animation();
	mAnimation->Start(0.2, e3::EAnimation::EaseInOutQuad, [this, dx](float v){
			mCircle->SetTranslation(glm::vec3(dx * (1 - v), 0, 0));
	}, [this](){
		mAnimation = nullptr;
	});
}

bool UiSwitch::OnClick(e3::MouseEvent* pEvent)
{
	UiSwitchBase::OnClick(pEvent);

	if (!mChecked) Check();
	else UnCheck();

	return true;
}

void UiSwitch::OnMouseEnter(e3::MouseEvent* e)
{
  UiSwitchBase::OnMouseEnter(e);
  if (mHover) mHover->SetOpacity(1);
}

void UiSwitch::OnMouseLeave(e3::MouseEvent* e)
{
  UiSwitchBase::OnMouseLeave(e);
  if (mHover) mHover->SetOpacity(0.0);
}

