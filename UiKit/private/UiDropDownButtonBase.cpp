#include "UiDropDownButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownButtonBase::UiDropDownButtonBase(e3::Element* pParent)
	: e3::Dropdown(pParent)
{
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(100, 100, 100, 255));
        this->SetBorderRadius(4);
        this->SetPadding("14dp");
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        AddElement(pText1);
        pText1->SetText("Email");
        pText1->SetFontSize("14dp");

}
