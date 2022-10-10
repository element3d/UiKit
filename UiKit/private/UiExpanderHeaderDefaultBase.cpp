#include "UiExpanderHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiExpanderHeaderDefaultBase::UiExpanderHeaderDefaultBase(e3::Element* pParent)
	: UiExpanderHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("48dp");
        this->SetBorderRadius(4);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(200, 200, 200, 255));
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(glm::vec4(248, 248, 248, 255));
        mText = new UiText();
        AddElement(mText);
        mText->SetMarginLeft("20dp");
        mText->SetFontSize("14dp");
        mText->SetTextColor(glm::vec4(20, 20, 20, 255));
        mText->SetText("Item 1");
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("20dp");
        mIcon->SetMarginRight("20dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(0, 0, 0, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mIcon->SetCharcode(57361);

}
