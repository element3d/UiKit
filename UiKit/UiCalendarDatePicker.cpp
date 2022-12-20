#include "UiCalendarDatePicker.h"
#include <e3/Application.h>
#include "_UiCalendarDatePickerPopup.h"


UiCalendarDatePicker::UiCalendarDatePicker(e3::Element* pParent)
	: UiCalendarDatePickerBase(pParent)
{
	mPopup = new _UiCalendarDatePickerPopup();


}


bool UiCalendarDatePicker::OnClick(e3::MouseEvent* pEvent)
{
	UiCalendarDatePickerBase::OnClick(pEvent);

	GetApplication()->GetElement()->AddElement(mPopup);
	mPopup->UpdateGeometry();
	auto pg = mPopup->GetGeometry();
	auto g = GetGeometry();
	float x = g.x + g.width / 2 - pg.width / 2;
	float y = g.y + g.height + e3::Dim("20dp");
	mPopup->SetTranslation(glm::vec3(x, y, 0));

	return true;
}