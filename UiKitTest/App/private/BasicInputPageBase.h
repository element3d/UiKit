
#ifndef __BasicInputPageBase_H__
#define __BasicInputPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "Page.h"


class BasicInputPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    BasicInputPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMenu = nullptr;


};

#endif // __BasicInputPageBase_H__

