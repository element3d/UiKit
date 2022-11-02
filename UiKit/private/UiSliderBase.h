
#ifndef __UiSliderBase_H__
#define __UiSliderBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiText.h>


class UiSliderBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    UiSliderBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG = nullptr;
e3::Element* mValue = nullptr;
e3::Element* mCircle = nullptr;
e3::Element* mInnerCircle = nullptr;
e3::Element* mInfo = nullptr;
UiText* mInfoText = nullptr;


};

#endif // __UiSliderBase_H__

