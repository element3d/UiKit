
#ifndef __UiListViewItemBase_H__
#define __UiListViewItemBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class UiListViewItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiListViewItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mSelection = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __UiListViewItemBase_H__

