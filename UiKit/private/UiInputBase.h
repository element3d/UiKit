
#ifndef __UiInputBase_H__
#define __UiInputBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class UiInputBase : public e3::Input
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiInputBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mUnderline = nullptr;


};

#endif // __UiInputBase_H__

