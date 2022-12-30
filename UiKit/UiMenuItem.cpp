#include "UiMenuItem.h"
#include "UiKit.h"

UiMenuItem::UiMenuItem(e3::Element* pParent)
	: UiMenuItemBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	  SetHeight("24dp");
	  SetBorderRadius(e3::Dim("6dp"));
	  SetMarginTop(0);
	  SetMarginBottom(0);
	  break;
  case EUiKitDesign::Material:
    SetHeight("36dp");
    SetMarginTop(0);
    SetMarginBottom(0);
  default:
	break;
  }
}

void UiMenuItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

void UiMenuItem::OnMouseEnter(e3::MouseEvent* pE)
{
  UiMenuItemBase::OnMouseEnter(pE);
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	mText->SetTextColor(glm::vec4(255));
	break;
  default:
	//mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	break;
  }
}

void UiMenuItem::OnMouseLeave(e3::MouseEvent* pE)
{
  UiMenuItemBase::OnMouseLeave(pE);
  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
  mText->SetTextColor(glm::vec4(60, 60, 60, 255));
}