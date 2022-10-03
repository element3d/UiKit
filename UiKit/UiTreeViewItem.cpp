#include "UiTreeViewItem.h"
#include "UiTreeView.h"

UiTreeViewItem::UiTreeViewItem(e3::Element* pParent)
	: UiTreeViewItemBase(pParent)
{
	mBody->SetVisibility(e3::EVisibility::Hidden);



}

void UiTreeViewItem::SetTreeIndex(int index)
{
	mTreeIndex = index; 
	SetMarginLeft(index * e3::Dim("40dp"));
}

void UiTreeViewItem::AddElement(UiTreeViewItem* pItem)
{
	pItem->SetTreeIndex(mTreeIndex + 1);
//	mIcon->SetVisibility(e3::EVisibility::Visible);
	mBody->AddElement(pItem);
	if (mHeaderItem) mHeaderItem->OnItemChildAdded();
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

void UiTreeViewItem::AddElement(UiTreeViewItemHeader* pHeader)
{
	mHeader->AddElement(pHeader);
	mHeaderItem = pHeader;
	if (mBody->GetNumChildren()) mHeaderItem->OnItemChildAdded();

	mHeaderItem->SetOnChangeCallback([this](bool expanded) {	
		mExpanded = expanded;
		if (mExpanded)
		{
			mBody->SetVisibility(e3::EVisibility::Visible);
			// mIcon->SetRotation(0, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
			//mIcon->SetRotation();
		}
		else
		{
			mBody->SetVisibility(e3::EVisibility::Hidden);
			// mIcon->SetRotation(-90, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
		}
	});
}

bool UiTreeViewItem::OnClick(e3::MouseEvent* pEvent)
{
	e3::Element::OnClick(pEvent);



	return true;
}