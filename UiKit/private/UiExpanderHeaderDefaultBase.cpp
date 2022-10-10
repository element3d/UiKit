#include "UiExpanderHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiExpanderHeaderDefaultBase::UiExpanderHeaderDefaultBase(e3::Element* pParent)
	: UiExpanderHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)3);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetMarginLeft("10dp");
        mText->SetFontSize("14dp");
        mText->SetTextColor(glm::vec4(20, 20, 20, 255));
        mText->SetText("Item 1");
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("14dp");
        mIcon->SetMarginRight("14dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(0, 0, 0, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mIcon->SetCharcode(57361);

}
