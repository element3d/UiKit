#include "UiCheckBoxBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiCheckBoxBase::UiCheckBoxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("20dp");
        this->SetHeight("20dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(4);
        this->SetBorderColor(glm::vec4(150, 150, 150, 255));
        mCheck = new UiIcon();
        AddElement(mCheck);
        mCheck->SetVisibility((e3::EVisibility)1);
        mCheck->SetWidth("60%");
        mCheck->SetColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mCheck->SetAspectRatio(1.000000);
        mCheck->SetCharcode(59198);

}
