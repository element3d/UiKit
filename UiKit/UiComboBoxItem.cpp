#include "UiComboBoxItem.h"
#include "UiKit.h"

UiComboBoxItem::UiComboBoxItem(e3::Element* pParent)
	: UiComboBoxItemBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	_SetMacOSStyles();
	break;
  case EUiKitDesign::Material:
	SetBorderRadius(0);
	RemoveElement(mSelection);
	mSelection = nullptr;
	// SetMarginTop(0);
	// SetMarginBottom(0);
	break;
  default:
	break;
  }

	Unselect();
}

void UiComboBoxItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

std::string UiComboBoxItem::GetTitle()
{
	return mTitle->GetText();
}

void UiComboBoxItem::Select()
{
	/*auto pItem = mListView->GetSelectedItem();
	if (pItem && pItem != this) pItem->Unselect();*/
	

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  break;
	case EUiKitDesign::Material:
	  break;
	default:
	  SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	  mSelection->SetVisibility(e3::EVisibility::Visible);
	  break;
	}

//	mListView->SetSelectedItem(this);
}

void UiComboBoxItem::Unselect()
{
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  break;
	case EUiKitDesign::Material:
	  break;
	default:
	  mSelection->SetVisibility(e3::EVisibility::Gone);
	  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	  break;
	}
}

bool UiComboBoxItem::OnClick(e3::MouseEvent* pE) 
{
	
	Select();

	return UiComboBoxItemBase::OnClick(pE);
}

void UiComboBoxItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiComboBoxItemBase::OnMouseEnter(pE);
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  mHover->SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	  mTitle->SetTextColor(glm::vec4(255));
	  break;
	default:
	  mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	  break;
	}
}

void UiComboBoxItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiComboBoxItemBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));
}

void UiComboBoxItem::_SetMacOSStyles()
{
  RemoveElement(mSelection);
  mSelection = nullptr;

  SetHeight("24dp");
  SetBorderRadius(e3::Dim("6dp"));
 
  mTitle->SetFontSize("13dp");
  SetBackgroundColor(glm::vec4(0));
  SetBorderSize(1);
  SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
  mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));
  SetBorderColor(glm::vec4(0));
  e3::ShadowParams sh;
  sh.BlurSize = 2;
  sh.Color = glm::vec4(150, 150, 150, 255);
  sh.Opacity = 1;
  sh.Offset = glm::vec2(0, 1);
  //SetShadow(sh);

  SetBorderRadius(e3::Dim("6dp"));

}