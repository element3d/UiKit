#include "UiButtonDefault.h"
#include "UiColor.h"
#include "UiKit.h"

UiButtonDefault::UiButtonDefault(e3::Element* pParent)
	: UiButtonDefaultBase(pParent)
{
	mColor = UiColor::Primary;//glm::vec4(250, 250, 250, 255);
	SetBackgroundColor(mColor);

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  _SetMacOSStyles();
	  break;
	case EUiKitDesign::Material:
	  _SetMaterialStyles();
	  break;
	default:
		_SetWindowsStyles();
	  break;
	}
}

void UiButtonDefault::SetText(const std::string& text)
{
	mText->SetText(text);
}

void UiButtonDefault::SetStyle(UiStyle style)
{
  UiButton::mStyle = style;
  
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
		_SetMacOSStyles();
		break;
	case EUiKitDesign::Material:
		_SetMaterialStyles();
		break;
  default:
		_SetWindowsStyles();
	break;
  }

  /*if (style == UiSecondary)
  {
	mColor = UiColor::Primary;
	SetBackgroundColor(UiColor::Primary);
	mText->SetTextColor(glm::vec4(255));
	SetBorderSize(0);
  }*/
}

void UiButtonDefault::_SetMaterialStyles()
{
	SetBorderRadius(e3::Dim("4dp"));
	SetHeight("36dp");

	if (mStyle == UiAccent)
	{
		mRipple->SetBackgroundColor(glm::vec4(255, 255, 255, 0.24 * 255));
		SetBorderSize(0);
		SetBackgroundColor(UiColor::Primary);
	  mText->SetFontStyle(e3::EFontStyle::Bold);
	  mText->SetTextColor(glm::vec4(255));
	}
	else 
	{
		mRipple->SetBackgroundColor(glm::vec4(98, 0, 238, 0.06 * 255));
		SetBackgroundColor(glm::vec4(255));
		SetBorderSize("1dp");
		SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
		mText->SetTextColor(UiColor::Primary);
		// mHover->SetBackgroundColor(glm::vec4(98, 0, 238, 0.04 * 255));
	}
}

void UiButtonDefault::_SetWindowsStyles()
{
	if (mStyle == UiAccent)
	{
		SetBackgroundColor(UiColor::Primary);
		mText->SetTextColor(UiColor::White);
		SetBorderSize(0);
	}
	else
		SetBackgroundColor(glm::vec4(255));
}

void UiButtonDefault::_SetMacOSStyles()
{
  SetHeight("25dp");
  if (mStyle == UiDefault)
  {
		SetBackgroundColor(glm::vec4(255));
		SetBorderSize(1);
		SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
		mText->SetTextColor(glm::vec4(50, 50, 50, 255));

		e3::ShadowParams sh;
		sh.BlurSize = 2;
		sh.Color = glm::vec4(150, 150, 150, 255);
		sh.Opacity = 1;
		sh.Offset = glm::vec2(0, 1);
		SetShadow(sh);
  }
  else 
  {
		SetBorderSize(0);
		SetBorderColor(glm::vec4(0, 0, 0, 0.2 * 255));
		SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
		mText->SetTextColor(glm::vec4(255));

		e3::ShadowParams sh;
		sh.BlurSize = 0;
		SetShadow(sh);
		}
  SetBorderRadius(e3::Dim("6dp"));
 
}