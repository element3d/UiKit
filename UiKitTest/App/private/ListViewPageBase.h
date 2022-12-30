
#ifndef __ListViewPageBase_H__
#define __ListViewPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include <WidgetSection.h>
#include <UiListView.h>
#include "Page.h"


class ListViewPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    ListViewPageBase(e3::Element* pParent = nullptr);

 
protected:
	UiListView* mListView = nullptr;


};

#endif // __ListViewPageBase_H__

