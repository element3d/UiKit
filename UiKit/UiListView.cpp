#include "UiListView.h"

UiListView::UiListView(e3::Element* pParent)
	: UiListViewBase(pParent)
{

}

void UiListView::AddElement(UiListViewItem* pItem)
{
	pItem->mListView = this;
	e3::Element::AddElement(pItem);
}

void UiListView::SetSelectedItem(UiListViewItem* pItem)
{
	mSelectedItem = pItem;
}