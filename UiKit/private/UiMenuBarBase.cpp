#include "UiMenuBarBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiMenuBarBase::UiMenuBarBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBackgroundColor(glm::vec4(240, 240, 240, 255));

}
