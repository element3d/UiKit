
#ifndef __UiButtonDefaultBase_H__
#define __UiButtonDefaultBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "UiButton.h"


class UiButtonDefaultBase : public UiButton
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiButtonDefaultBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;


};

#endif // __UiButtonDefaultBase_H__

