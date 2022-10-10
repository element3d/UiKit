#include "UiComboBoxItem.h"

UiComboBoxItem::UiComboBoxItem(e3::Element* pParent)
	: UiComboBoxItemBase(pParent)
{

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
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
//	mListView->SetSelectedItem(this);
}

void UiComboBoxItem::Unselect()
{
	mSelection->SetVisibility(e3::EVisibility::Gone);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}

bool UiComboBoxItem::OnClick(e3::MouseEvent* pE) 
{
	
	Select();

	return true;
}

void UiComboBoxItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiComboBoxItemBase::OnMouseEnter(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 10));
}

void UiComboBoxItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiComboBoxItemBase::OnMouseLeave(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}