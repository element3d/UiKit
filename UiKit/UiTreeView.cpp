#include "UiTreeView.h"

UiTreeView::UiTreeView(e3::Element* pParent)
	: UiTreeViewBase(pParent)
{

}

void UiTreeView::AddElement(UiTreeViewItem* pItem)
{
	printf("*--------------------------------------------------");
	pItem->mTree = this;
	pItem->SetTreeIndex(0);
	e3::Element::AddElement(pItem);
}