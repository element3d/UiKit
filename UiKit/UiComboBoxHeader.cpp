#include "UiComboBoxHeader.h"
#include "UiKit.h"

UiComboBoxHeader::UiComboBoxHeader(e3::Element* pParent)
	: UiComboBoxHeaderBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Material:
		SetBorderSize(0);
		SetHeight("36dp");
		break;
  default:
		mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
		break;
  }
}

void UiComboBoxHeader::OnMouseEnter(e3::MouseEvent* pE)
{
	UiComboBoxHeaderBase::OnMouseEnter(pE);

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetBackgroundColor(glm::vec4(255));
	  SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
	  break;
	default:
	  mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	  break;
	}

	
}

void UiComboBoxHeader::OnMouseLeave(e3::MouseEvent* pE)
{
	UiComboBoxHeaderBase::OnMouseLeave(pE);
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	  SetBorderColor(glm::vec4(0));
	  break;
	default:
	  mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	  break;
	}
	
}