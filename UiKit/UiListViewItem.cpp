#include "UiListViewItem.h"
#include "UiListView.h"

UiListViewItem::UiListViewItem(e3::Element* pParent)
	: UiListViewItemBase(pParent)
{
		mSelection->SetVisibility(e3::EVisibility::Gone);
}

void UiListViewItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void UiListViewItem::Select()
{
	auto pItem = mListView->GetSelectedItem();
	if (pItem && pItem != this) pItem->Unselect();
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
	mListView->SetSelectedItem(this);
}

void UiListViewItem::Unselect()
{
	mSelection->SetVisibility(e3::EVisibility::Gone);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}

bool UiListViewItem::OnClick(e3::MouseEvent* pE) 
{
	
	Select();

	return true;
}

void UiListViewItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiListViewItemBase::OnMouseEnter(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 10));
}

void UiListViewItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiListViewItemBase::OnMouseLeave(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}