
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <UiDropDownBody.h>
#include <UiDropDownBodyItem.h>
#include <UiButton.h>
#include <UiDropDownButton.h>
#include <UiCheckBox.h>
#include <UiRadioButton.h>
#include <UiSwitch.h>
#include <UiSlider.h>
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
	UiDropDownBody* mDDBody = nullptr;
UiTreeView* mTree = nullptr;


};

#endif // __MainBase_H__

