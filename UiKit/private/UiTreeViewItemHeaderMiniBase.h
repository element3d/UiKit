
#ifndef __UiTreeViewItemHeaderMiniBase_H__
#define __UiTreeViewItemHeaderMiniBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include "UiTreeViewItemHeader.h"


class UiTreeViewItemHeaderMiniBase : public UiTreeViewItemHeader
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiTreeViewItemHeaderMiniBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mSelection = nullptr;
e3::FontIcon* mIcon = nullptr;
e3::Element* mContainer = nullptr;


};

#endif // __UiTreeViewItemHeaderMiniBase_H__

