
#ifndef UiCalendarDatePicker_H_
#define UiCalendarDatePicker_H_

#include "private/UiCalendarDatePickerBase.h"
#include "_UiCalendarDatePickerPopup.h"

class E3_EXPORT UiCalendarDatePicker : public UiCalendarDatePickerBase
{
public:
	UiCalendarDatePicker(e3::Element* pParent = nullptr);

	virtual bool OnClick(e3::MouseEvent*) override;

private:
	_UiCalendarDatePickerPopup* mPopup;
};

#endif // UiCalendarDatePicker_H_

