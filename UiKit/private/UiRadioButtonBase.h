
#ifndef __UiRadioButtonBase_H__
#define __UiRadioButtonBase_H__

#include <e3/ViewFactory.h>


class UiRadioButtonBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiRadioButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHover = nullptr;
e3::Element* mCircle = nullptr;


};

#endif // __UiRadioButtonBase_H__

