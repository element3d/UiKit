#include "UiDropDownButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownButtonBase::UiDropDownButtonBase(e3::Element* pParent)
	: e3::Dropdown(pParent)
{
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(200, 200, 200, 255));
        this->SetBorderRadius(4);
        this->SetPadding("14dp");
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
                UiText* pCustomView1 = new UiText();
        AddElement(pCustomView1);
        pCustomView1->SetText("Email");
        pCustomView1->SetFontSize("14dp");
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("14dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetCharcode(59149);

}
