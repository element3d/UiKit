
#ifndef __UiExpanderHeaderDefaultBase_H__
#define __UiExpanderHeaderDefaultBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
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
	e3::Text* mText = nullptr;
e3::FontIcon* mIcon = nullptr;


};

#endif // __UiExpanderHeaderDefaultBase_H__

