#include "_UiCalendarDatePickerDayItem.h"
#include "UiColor.h"

_UiCalendarDatePickerDayItem::_UiCalendarDatePickerDayItem(e3::Element* pParent)
	: _UiCalendarDatePickerDayItemBase(pParent)
{

}

void _UiCalendarDatePickerDayItem::SetDay(int day)
{
	mText->SetText(std::to_string(day));
}

void _UiCalendarDatePickerDayItem::Check()
{
	SetBackgroundColor(UiColor::Primary);
	mText->SetTextColor(glm::vec4(255));
	mChecked = true;
}

void _UiCalendarDatePickerDayItem::Disable()
{
  mText->SetTextColor(glm::vec4(150, 150, 150, 205));
}

void _UiCalendarDatePickerDayItem::OnMouseEnter(e3::MouseEvent* pEvent) 
{
	_UiCalendarDatePickerDayItemBase::OnMouseEnter(pEvent);
	if (!mChecked) SetBackgroundColor(glm::vec4(0, 0, 0, 255 * 0.0337));
}

void _UiCalendarDatePickerDayItem::OnMouseLeave(e3::MouseEvent* pEvent) 
{
		_UiCalendarDatePickerDayItemBase::OnMouseLeave(pEvent);
		if (!mChecked) SetBackgroundColor(glm::vec4(0, 0, 0, 255 * 0));
}