
#ifndef _UiCalendarDatePickerDayItem_H_
#define _UiCalendarDatePickerDayItem_H_

#include "private/_UiCalendarDatePickerDayItemBase.h"

class E3_EXPORT _UiCalendarDatePickerDayItem : public _UiCalendarDatePickerDayItemBase
{
public:
	_UiCalendarDatePickerDayItem(e3::Element* pParent = nullptr);

	void SetDay(int day);
	void Check();
	void Disable();

	virtual void OnMouseEnter(e3::MouseEvent*) override;
	virtual void OnMouseLeave(e3::MouseEvent*) override;


private:
	bool mChecked = false;
};

#endif // _UiCalendarDatePickerDayItem_H_

