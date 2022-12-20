
#ifndef __DialogsAndFlyoutsPageBase_H__
#define __DialogsAndFlyoutsPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "Page.h"


class DialogsAndFlyoutsPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    DialogsAndFlyoutsPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMenu = nullptr;


};

#endif // __DialogsAndFlyoutsPageBase_H__

