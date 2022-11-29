
#ifndef __UiDropDownButtonBase_H__
#define __UiDropDownButtonBase_H__

#include <e3/ViewFactory.h>
#include <UiIcon.h>


class UiDropDownButtonBase : public e3::Dropdown
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiDropDownButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHover = nullptr;
e3::Element* mContent = nullptr;
UiIcon* mIcon = nullptr;


};

#endif // __UiDropDownButtonBase_H__

