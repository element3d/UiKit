
#ifndef __DialogPageBase_H__
#define __DialogPageBase_H__

#include <e3/ViewFactory.h>
#include <UiText.h>
#include <WidgetSection.h>
#include <UiButton.h>
#include "Page.h"


class DialogPageBase : public Page
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    DialogPageBase(e3::Element* pParent = nullptr);

 
protected:
	UiButton* mShowDialogButton = nullptr;


};

#endif // __DialogPageBase_H__

