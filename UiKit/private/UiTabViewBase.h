
#ifndef __UiTabViewBase_H__
#define __UiTabViewBase_H__

#include <e3/ViewFactory.h>
#include <UiHoverable.h>
#include <UiIcon.h>


class UiTabViewBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiTabViewBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mTabs = nullptr;
e3::Element* mTabCont = nullptr;
UiHoverable* mAdd = nullptr;
e3::Element* mPageCont = nullptr;


};

#endif // __UiTabViewBase_H__

