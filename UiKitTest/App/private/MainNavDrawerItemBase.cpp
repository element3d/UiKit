#include "MainNavDrawerItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MainNavDrawerItemBase::MainNavDrawerItemBase(e3::Element* pParent)
	: UiNavigationDrawerItem(pParent)
{
        this->SetHeight("40dp");

}
