
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <UiComboBox.h>
#include <UiComboBoxHeaderDefault.h>
#include <UiComboBoxBody.h>
#include <UiComboBoxItem.h>
#include <UiExpander.h>
#include <UiExpanderHeaderDefault.h>
#include <UiExpanderBody.h>
#include <UiListView.h>
#include <UiListViewItem.h>
#include <UiTreeView.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	UiTreeView* mTree = nullptr;


};

#endif // __MainBase_H__

