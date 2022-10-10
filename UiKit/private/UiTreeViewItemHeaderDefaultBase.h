
#ifndef __UiTreeViewItemHeaderDefaultBase_H__
#define __UiTreeViewItemHeaderDefaultBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiText.h>
#include "UiTreeViewItemHeaderMini.h"


class UiTreeViewItemHeaderDefaultBase : public UiTreeViewItemHeaderMini
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiTreeViewItemHeaderDefaultBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;


};

#endif // __UiTreeViewItemHeaderDefaultBase_H__

