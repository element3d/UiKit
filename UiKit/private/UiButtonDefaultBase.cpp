#include "UiButtonDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiButtonDefaultBase::UiButtonDefaultBase(e3::Element* pParent)
	: UiButton(pParent)
{
        mText = new UiText();
        AddElement(mText);
        mText->SetFontSize("14dp");

}
