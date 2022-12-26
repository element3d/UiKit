
#ifndef __UiButtonBase_H__
#define __UiButtonBase_H__

#include <e3/ViewFactory.h>


class UiButtonBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHover = nullptr;
e3::Element* mRipple = nullptr;


};

#endif // __UiButtonBase_H__

