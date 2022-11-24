
#ifndef __UiTabBase_H__
#define __UiTabBase_H__

#include <e3/ViewFactory.h>
#include <UiIcon.h>
#include <UiText.h>
#include <UiHoverable.h>


class UiTabBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiTabBase(e3::Element* pParent = nullptr);

 
protected:
	UiIcon* mIcon = nullptr;
UiText* mTitle = nullptr;
UiIcon* mClose = nullptr;


};

#endif // __UiTabBase_H__

