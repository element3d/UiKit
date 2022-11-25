
#ifndef __UiMenuItemBase_H__
#define __UiMenuItemBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "UiHoverable.h"


class UiMenuItemBase : public UiHoverable
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiMenuItemBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;


};

#endif // __UiMenuItemBase_H__

