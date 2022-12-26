#include "UiDropDownIconItem.h"
#include "UiKit.h"

UiDropDownIconItem::UiDropDownIconItem(e3::Element* pParent)
	: UiDropDownIconItemBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	SetHeight("25dp");
	SetBorderRadius(e3::Dim("6dp"));
	break;
  case EUiKitDesign::Material:
	SetBorderRadius(0);
	break;
  default:
	break;
  }
}

void UiDropDownIconItem::SetIcon(const std::string& charcode)
{
	mIcon->SetCharcode(charcode);
}

void UiDropDownIconItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

void UiDropDownIconItem::OnMouseEnter(e3::MouseEvent* pE)
{
  UiDropDownIconItemBase::OnMouseEnter(pE);
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	mText->SetTextColor(glm::vec4(255));
	mIcon->SetColor(glm::vec4(255));
	break;
  default:
	//mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	break;
  }
}

void UiDropDownIconItem::OnMouseLeave(e3::MouseEvent* pE)
{
  UiDropDownIconItemBase::OnMouseLeave(pE);
  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
  mText->SetTextColor(glm::vec4(60, 60, 60, 255));
  mIcon->SetColor(glm::vec4(0, 0, 0, 255));
}