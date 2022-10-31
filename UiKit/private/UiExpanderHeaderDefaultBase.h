
#ifndef __UiExpanderHeaderDefaultBase_H__
#define __UiExpanderHeaderDefaultBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiText.h>
#include <UiIcon.h>
#include "UiExpanderHeader.h"


class UiExpanderHeaderDefaultBase : public UiExpanderHeader
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiExpanderHeaderDefaultBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;
UiIcon* mIcon = nullptr;


};

#endif // __UiExpanderHeaderDefaultBase_H__

