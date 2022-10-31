
#ifndef __TreeViewPageBase_H__
#define __TreeViewPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include <UiTreeView.h>
#include <UiTreeViewItem.h>
#include <UiTreeViewItemHeaderDefault.h>
#include "Page.h"


class TreeViewPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TreeViewPageBase(e3::Element* pParent = nullptr);

 
protected:
	UiTreeView* mTreeView = nullptr;


};

#endif // __TreeViewPageBase_H__

