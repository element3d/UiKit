
#ifndef __CollectionsPageBase_H__
#define __CollectionsPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include "Page.h"


class CollectionsPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CollectionsPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMenu = nullptr;


};

#endif // __CollectionsPageBase_H__

