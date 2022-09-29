#include "UiTreeViewBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewBase::UiTreeViewBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetAlignItemsVer((e3::EAlignment)0);

}
