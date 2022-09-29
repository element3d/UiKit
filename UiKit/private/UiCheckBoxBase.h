
#ifndef __UiCheckBoxBase_H__
#define __UiCheckBoxBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class UiCheckBoxBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiCheckBoxBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mCheck = nullptr;


};

#endif // __UiCheckBoxBase_H__

