#include "UiCalendarDatePickerBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiCalendarDatePickerBase::UiCalendarDatePickerBase(e3::Element* pParent)
	: UiButton(pParent)
{
                UiText* pCustomView1 = new UiText();
        AddElement(pCustomView1);
        pCustomView1->SetText("Pick a date");
                UiIcon* pCustomView2 = new UiIcon();
        AddElement(pCustomView2);
        pCustomView2->SetMarginLeft("8dp");
        pCustomView2->SetWidth("12dp");
        pCustomView2->SetCharcode(59584);

}
