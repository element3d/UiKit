#include "UiTreeViewItemHeaderBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderBase::UiTreeViewItemHeaderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetBorderRadius(6);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetPositionType((e3::EPositionType)1);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);

}
