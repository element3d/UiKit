
#ifndef __UiHoverableBase_H__
#define __UiHoverableBase_H__

#include <e3/ViewFactory.h>


class UiHoverableBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiHoverableBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHover = nullptr;


};

#endif // __UiHoverableBase_H__

