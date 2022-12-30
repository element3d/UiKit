#include "UiTreeViewItemHeader.h"
#include "UiTreeView.h"
#include "UiKit.h"

UiTreeViewItemHeader::UiTreeViewItemHeader(e3::Element* pParent)
	: UiTreeViewItemHeaderBase(pParent)
{
	auto des = UiKit::GetDesign();
	switch (des)
	{
	case EUiKitDesign::Windows:
		break;
	case EUiKitDesign::Apple:
		break;
	case EUiKitDesign::Material:
		SetHeight("36dp");
		SetBorderRadius(0);
		break;
	default:
		break;
	}
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