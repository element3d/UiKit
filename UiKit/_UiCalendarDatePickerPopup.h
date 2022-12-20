
#ifndef _UiCalendarDatePickerPopup_H_
#define _UiCalendarDatePickerPopup_H_

#include "private/_UiCalendarDatePickerPopupBase.h"

class E3_EXPORT _UiCalendarDatePickerPopup : public _UiCalendarDatePickerPopupBase
{
public:
	_UiCalendarDatePickerPopup(e3::Element* pParent = nullptr);

	void SetHeader(const std::string& header);

private:
	void _Create(int d, int m, int year);

private:
  int mDay;
  int mIMonth;
  int mYear;
};

#endif // _UiCalendarDatePickerPopup_H_

