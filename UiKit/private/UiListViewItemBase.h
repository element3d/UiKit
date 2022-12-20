
#ifndef __UiListViewItemBase_H__
#define __UiListViewItemBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiText.h>
#include "UiHoverable.h"


class UiListViewItemBase : public UiHoverable
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
UiText* mTitle = nullptr;


};

#endif // __UiListViewItemBase_H__

