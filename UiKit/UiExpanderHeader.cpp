#include "UiExpanderHeader.h"

UiExpanderHeader::UiExpanderHeader(e3::Element* pParent)
	: UiExpanderHeaderBase(pParent)
{
	SetOnClickCallback([this](e3::MouseEvent*) {
		mExpanded = !mExpanded;
		OnChange(mExpanded);
		if (mOnChangeCallback) mOnChangeCallback(mExpanded);
	});
}

void UiExpanderHeader::OnChange(bool expanded)
{

}
