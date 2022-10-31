#include "UiAppBarButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiAppBarButtonBase::UiAppBarButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetHeight("40dp");
        this->SetWidth("40dp");
        this->SetBorderRadius(4);
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetWidth("16dp");
        mIcon->SetHeight("16dp");
        mIcon->SetCharcode(59179);

}
