#include "UiTreeViewItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemBase::UiTreeViewItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOrientation((e3::EOrientation)1);
    mHeader = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHeader);
        mHeader->SetWidth("100%");
        mHeader->SetAlignItemsHor((e3::EAlignment)0);
    mBody = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBody);
        mBody->SetOrientation((e3::EOrientation)1);
        mBody->SetWidth("100%");

}
