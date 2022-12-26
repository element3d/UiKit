#include "UiTreeViewItemHeader.h"
#include "UiTreeView.h"


UiTreeViewItemHeader::UiTreeViewItemHeader(e3::Element* pParent)
	: UiTreeViewItemHeaderBase(pParent)
{
	
}

void UiTreeViewItemHeader::Select()
{
		SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
}

void UiTreeViewItemHeader::Unselect()
{

}

void UiTreeViewItemHeader::OnChange(bool expanded)
{

}

bool UiTreeViewItemHeader::OnClick(e3::MouseEvent* pE) 
{
	Select();
	/*if (mTree)
	{
		auto pItem = mTree->GetSelectedItem();
		if (pItem) pItem->Unselect();
	}*/
	mExpanded = !mExpanded;
	OnChange(mExpanded);
	if (mOnChangeCallback) mOnChangeCallback(mExpanded);

	return UiTreeViewItemHeaderBase::OnClick(pE);
}

void UiTreeViewItemHeader::OnMouseEnter(e3::MouseEvent* pE)
{
	UiTreeViewItemHeaderBase::OnMouseEnter(pE);
	// mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
}

void UiTreeViewItemHeader::OnMouseLeave(e3::MouseEvent* pE)
{
	UiTreeViewItemHeaderBase::OnMouseLeave(pE);
	// mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}