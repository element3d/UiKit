
#ifndef __UiNavigationDrawerItemBase_H__
#define __UiNavigationDrawerItemBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiIcon.h>
#include <UiText.h>


class UiNavigationDrawerItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiNavigationDrawerItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHeader = nullptr;
e3::Element* mSelection = nullptr;
e3::Element* mContainer = nullptr;
UiIcon* mIcon = nullptr;
UiText* mTitle = nullptr;
e3::FontIcon* mExpandIcon = nullptr;
e3::Element* mChildCont = nullptr;


};

#endif // __UiNavigationDrawerItemBase_H__

