#include "_UiCalendarDatePickerDayItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

_UiCalendarDatePickerDayItemBase::_UiCalendarDatePickerDayItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("40dp");
        this->SetAspectRatio(1.000000);
        this->SetBorderRadius(20);
        this->SetMargin("2dp");
        mText = new UiText();
        AddElement(mText);

}
