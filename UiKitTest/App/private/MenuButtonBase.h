
#ifndef __MenuButtonBase_H__
#define __MenuButtonBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "UiButton.h"


class MenuButtonBase : public UiButton
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MenuButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mImage = nullptr;
UiText* mTitle = nullptr;
UiText* mDesc = nullptr;


};

#endif // __MenuButtonBase_H__

