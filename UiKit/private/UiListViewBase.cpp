#include "UiListViewBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiListViewBase::UiListViewBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOverflow((e3::EOverflow)2);
        this->SetOrientation((e3::EOrientation)1);

}
