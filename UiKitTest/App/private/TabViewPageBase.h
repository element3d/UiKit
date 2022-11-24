
#ifndef __TabViewPageBase_H__
#define __TabViewPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include <UiTabView.h>
#include <UiTabViewPage.h>
#include "Page.h"


class TabViewPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TabViewPageBase(e3::Element* pParent = nullptr);

 
protected:
	UiTabView* mTabView = nullptr;


};

#endif // __TabViewPageBase_H__

