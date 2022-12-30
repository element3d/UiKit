#include "UiComboBoxHeaderDefault.h"
#include "UiKit.h"

UiComboBoxHeaderDefault::UiComboBoxHeaderDefault(e3::Element* pParent)
	: UiComboBoxHeaderDefaultBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	_SetMacOSStyles();
	break;
  case EUiKitDesign::Material:
	SetBorderRadius(0);
	SetMargin(0);
	SetBackgroundColor(glm::vec4(255));
	SetBorderSize(0);
	SetHeight("36dp");
	// break;
  default:
	mIconCont->SetBackgroundColor(glm::vec4(0));
	mIconCont->SetMarginRight("8dp");
	mIconCont->SetMarginLeft("8dp");
	break;
  }
}

void UiComboBoxHeaderDefault::OnMouseEnter(e3::MouseEvent* pE)
{
  UiComboBoxHeaderDefaultBase::OnMouseEnter(pE);
  if (UiKit::GetDesign() == EUiKitDesign::Apple) mIconCont->SetBackgroundColor(glm::vec4(0));
}

void UiComboBoxHeaderDefault::OnMouseLeave(e3::MouseEvent* pE) 
{
  UiComboBoxHeaderDefaultBase::OnMouseLeave(pE);
  if (UiKit::GetDesign() == EUiKitDesign::Apple) mIconCont->SetBackgroundColor(glm::vec4(60, 60, 67, 0.18 * 255));
}

void UiComboBoxHeaderDefault::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}

void UiComboBoxHeaderDefault::_SetMacOSStyles()
{
  mIcon->SetCharcode("EC8F");
  mIcon->SetWidth("10dp");
  SetHeight("24dp");
  SetBorderRadius(e3::Dim("6dp"));
  mIcon->SetMarginLeft("8dp");
  mIcon->SetMarginRight("8dp");
  mText->SetFontSize("13dp");
	SetBackgroundColor(glm::vec4(0));
	SetBorderSize(1);
	SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
	mText->SetTextColor(glm::vec4(50, 50, 50, 255));
	SetBorderColor(glm::vec4(0));
	e3::ShadowParams sh;
	sh.BlurSize = 2;
	sh.Color = glm::vec4(150, 150, 150, 255);
	sh.Opacity = 1;
	sh.Offset = glm::vec2(0, 1);
	//SetShadow(sh);

  SetBorderRadius(e3::Dim("6dp"));

}