#include "WidgetSectionBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

WidgetSectionBase::WidgetSectionBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetMarginTop("20dp");
        this->SetBorderSize("1dp");
        this->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetBorderRadius(10);
        this->SetPadding("20dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOrientation((e3::EOrientation)1);

}
