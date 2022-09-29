
#ifndef __UiTreeViewItemBase_H__
#define __UiTreeViewItemBase_H__

#include <e3/ViewFactory.h>


class UiTreeViewItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiTreeViewItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mText = nullptr;


};

#endif // __UiTreeViewItemBase_H__

