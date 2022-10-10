
#ifndef __UiTreeViewItemHeaderDefaultBase_H__
#define __UiTreeViewItemHeaderDefaultBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include "UiTreeViewItemHeader.h"


class UiTreeViewItemHeaderDefaultBase : public UiTreeViewItemHeader
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
	e3::Element* mSelection = nullptr;
e3::FontIcon* mIcon = nullptr;
e3::Text* mText = nullptr;


};

#endif // __UiTreeViewItemHeaderDefaultBase_H__

