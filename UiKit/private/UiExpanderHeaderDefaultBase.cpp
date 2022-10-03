#include "UiExpanderHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiExpanderHeaderDefaultBase::UiExpanderHeaderDefaultBase(e3::Element* pParent)
	: UiExpanderHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(UiColor::White);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetMarginLeft("10dp");
        mText->SetFontSize("14dp");
        mText->SetText("Item 1");
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("10dp");
        mIcon->SetMarginRight("10dp");
        mIcon->SetWidth("14dp");
        mIcon->SetHeight("14dp");
        mIcon->SetColor(glm::vec4(0, 0, 0, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mIcon->SetCharcode(57361);

}
