#include "UiTabViewPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTabViewPageBase::UiTabViewPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(255, 255, 255, 255));

}
