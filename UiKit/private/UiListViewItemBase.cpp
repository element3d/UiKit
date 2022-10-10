#include "UiListViewItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiListViewItemBase::UiListViewItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");

}
