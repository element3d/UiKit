#include "UiTreeViewItem.h"
#include "UiTreeView.h"

UiTreeViewItem::UiTreeViewItem(e3::Element* pParent)
	: UiTreeViewItemBase(pParent)
{

}

void UiTreeViewItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

void UiTreeViewItem::SetTreeIndex(int index)
{
	mTreeIndex = index; 
	SetMarginLeft(index * e3::Dim("20dp"));
}

void UiTreeViewItem::AddElement(UiTreeViewItem* pItem)
{
	pItem->SetTreeIndex(mTreeIndex + 1);
	int index = 0;
	if (!mTree) return;
	for (int i = 0; i < mTree->GetNumChildren(); ++i) 
	{
		if (this == mTree->GetChildren()[i]) 
		{
			index = i;
			break;
		}
	}
	
	mTree->InsertElement(index + mItems.size() + 1, pItem);
	mItems.push_back(pItem);
}
