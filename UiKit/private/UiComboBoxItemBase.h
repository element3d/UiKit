
#ifndef __UiComboBoxItemBase_H__
#define __UiComboBoxItemBase_H__

#include <e3/ViewFactory.h>


class UiComboBoxItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiComboBoxItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mText = nullptr;


};

#endif // __UiComboBoxItemBase_H__

