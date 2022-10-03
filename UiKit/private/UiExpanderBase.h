
#ifndef __UiExpanderBase_H__
#define __UiExpanderBase_H__

#include <e3/ViewFactory.h>


class UiExpanderBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiExpanderBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHeader = nullptr;
e3::Element* mBody = nullptr;


};

#endif // __UiExpanderBase_H__

