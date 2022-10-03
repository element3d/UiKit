
#ifndef __UiComboBoxBase_H__
#define __UiComboBoxBase_H__

#include <e3/ViewFactory.h>


class UiComboBoxBase : public e3::Dropdown
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiComboBoxBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mHeader = nullptr;


};

#endif // __UiComboBoxBase_H__

