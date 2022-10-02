#include "UiTreeViewItem.h"
#include "UiTreeView.h"

UiTreeViewItem::UiTreeViewItem(e3::Element* pParent)
	: UiTreeViewItemBase(pParent)
{
	mBody->SetVisibility(e3::EVisibility::Hidden);

	mHeader->SetOnClickCallback([this](e3::MouseEvent*) {	
		mExpanded = !mExpanded;
		if (mExpanded)
			mBody->SetVisibility(e3::EVisibility::Visible);
		else
			mBody->SetVisibility(e3::EVisibility::Hidden);
	});
}

void UiTreeViewItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

void UiTreeViewItem::SetTreeIndex(int index)
{
	mTreeIndex = index; 
	SetMarginLeft(index * e3::Dim("40dp"));
}

void UiTreeViewItem::AddElement(UiTreeViewItem* pItem)
{
	pItem->SetTreeIndex(mTreeIndex + 1);
	mBody->AddElement(pItem);
	/*int index = 0;
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
	mItems.push_back(pItem);*/
}

bool UiTreeViewItem::OnClick(e3::MouseEvent* pEvent)
{
	e3::Element::OnClick(pEvent);



	return true;
}