#include "UiDropDownItem.h"
#include "UiKit.h"

UiDropDownItem::UiDropDownItem(e3::Element* pParent)
	: UiDropDownItemBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	  SetHeight("24dp");
	  SetBorderRadius(e3::Dim("6dp"));
	  break;
  case EUiKitDesign::Material:
	  SetBorderRadius(0);
    SetHeight("36dp");
	  SetMargin(0);
	  break;
  default:
	break;
  }
}

void UiDropDownItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

void UiDropDownItem::OnMouseEnter(e3::MouseEvent* pE)
{
  UiDropDownItemBase::OnMouseEnter(pE);
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

void UiDropDownItem::OnMouseLeave(e3::MouseEvent* pE)
{
  UiDropDownItemBase::OnMouseLeave(pE);
  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
  mText->SetTextColor(glm::vec4(60, 60, 60, 255));
}