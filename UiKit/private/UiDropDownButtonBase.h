
#ifndef __UiDropDownButtonBase_H__
#define __UiDropDownButtonBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
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
	UiIcon* mIcon = nullptr;


};

#endif // __UiDropDownButtonBase_H__

