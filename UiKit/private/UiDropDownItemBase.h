
#ifndef __UiDropDownItemBase_H__
#define __UiDropDownItemBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "UiHoverable.h"


class UiDropDownItemBase : public UiHoverable
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiDropDownItemBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;


};

#endif // __UiDropDownItemBase_H__

