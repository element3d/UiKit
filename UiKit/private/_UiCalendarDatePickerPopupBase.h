
#ifndef ___UiCalendarDatePickerPopupBase_H__
#define ___UiCalendarDatePickerPopupBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include <UiAppBarButton.h>
#include <UiDivider.h>


class _UiCalendarDatePickerPopupBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    _UiCalendarDatePickerPopupBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mMonth = nullptr;
UiAppBarButton* mPrev = nullptr;
UiAppBarButton* mNext = nullptr;
e3::Element* mContent = nullptr;


};

#endif // ___UiCalendarDatePickerPopupBase_H__

