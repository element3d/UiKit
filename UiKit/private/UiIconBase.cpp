#include "UiIconBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiIconBase::UiIconBase(e3::Element* pParent)
	: e3::FontIcon(pParent)
{
        this->SetWidth("16dp");
        this->SetHeight("16dp");
        this->SetFont(_s(UiKit/fonts/SegMDL2.ttf));

}
