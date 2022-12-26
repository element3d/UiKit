
#ifndef __UiSwitchBase_H__
#define __UiSwitchBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class UiSwitchBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiSwitchBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG = nullptr;
e3::Element* mCircle = nullptr;
e3::Element* mHover = nullptr;


};

#endif // __UiSwitchBase_H__

