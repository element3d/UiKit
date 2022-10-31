
#ifndef __AllControlsPageBase_H__
#define __AllControlsPageBase_H__

#include <e3/ViewFactory.h>
#include "Page.h"


class AllControlsPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    AllControlsPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMenu = nullptr;


};

#endif // __AllControlsPageBase_H__

