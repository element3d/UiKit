#include "UiMenuBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiMenuBase::UiMenuBase(e3::Element* pParent)
	: UiText(pParent)
{
        this->SetMarginLeft("10dp");
        this->SetMarginRight("10dp");
        this->SetFontSize("15dp");

}
