
#ifndef __UiAppBarButtonBase_H__
#define __UiAppBarButtonBase_H__

#include <e3/ViewFactory.h>
#include <UiIcon.h>


class UiAppBarButtonBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiAppBarButtonBase(e3::Element* pParent = nullptr);

 
protected:
	UiIcon* mIcon = nullptr;


};

#endif // __UiAppBarButtonBase_H__

