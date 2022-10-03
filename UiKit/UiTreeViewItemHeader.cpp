#include "UiTreeViewItemHeader.h"

UiTreeViewItemHeader::UiTreeViewItemHeader(e3::Element* pParent)
	: UiTreeViewItemHeaderBase(pParent)
{
	SetOnClickCallback([this](e3::MouseEvent*) {
		mExpanded = !mExpanded;
		OnChange(mExpanded);
		if (mOnChangeCallback) mOnChangeCallback(mExpanded);
	});
}

void UiTreeViewItemHeader::OnChange(bool expanded)
{

}