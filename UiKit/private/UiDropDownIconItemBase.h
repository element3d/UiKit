
#ifndef __UiDropDownIconItemBase_H__
#define __UiDropDownIconItemBase_H__

#include <e3/ViewFactory.h>
#include <UiIcon.h>
#include <UiText.h>
#include "UiHoverable.h"


class UiDropDownIconItemBase : public UiHoverable
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiDropDownIconItemBase(e3::Element* pParent = nullptr);

 
protected:
	UiIcon* mIcon = nullptr;
UiText* mText = nullptr;


};

#endif // __UiDropDownIconItemBase_H__

