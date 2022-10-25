#include "UiNavigationDrawerBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiNavigationDrawerBase::UiNavigationDrawerBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("100%");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);

}
