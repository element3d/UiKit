
#ifndef __TextPageBase_H__
#define __TextPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "Page.h"


class TextPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TextPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMenu = nullptr;


};

#endif // __TextPageBase_H__

