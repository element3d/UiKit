#include "UiDividerBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDividerBase::UiDividerBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("1dp");
        this->SetBackgroundColor(glm::vec4(220, 220, 220, 255));

}
