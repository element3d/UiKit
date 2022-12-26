
#ifndef __UiComboBoxHeaderDefaultBase_H__
#define __UiComboBoxHeaderDefaultBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiText.h>
#include <UiIcon.h>
#include "UiComboBoxHeader.h"


class UiComboBoxHeaderDefaultBase : public UiComboBoxHeader
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiComboBoxHeaderDefaultBase(e3::Element* pParent = nullptr);

 
protected:
	UiText* mText = nullptr;
e3::Element* mIconCont = nullptr;
UiIcon* mIcon = nullptr;


};

#endif // __UiComboBoxHeaderDefaultBase_H__

