#include "UiInputBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiInputBase::UiInputBase(e3::Element* pParent)
	: e3::Input(pParent)
{
        this->SetHeight("31dp");
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
        this->SetBorderRadius(4);
        this->SetTextColor(glm::vec4(50, 50, 50, 255));
        this->SetFontSize(14);
        this->SetPaddingLeft(0);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetOverflow((e3::EOverflow)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("1dp");
        pElement1->SetBackgroundColor(UiColor::Primary);
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetBottom(0);
        pElement1->SetLeft(0);

}
