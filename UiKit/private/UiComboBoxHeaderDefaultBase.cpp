#include "UiComboBoxHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxHeaderDefaultBase::UiComboBoxHeaderDefaultBase(e3::Element* pParent)
	: UiComboBoxHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("34dp");
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(glm::vec4(252, 252, 252, 255));
        this->SetBorderRadius(4);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(0, 0, 0, 0.1622 * 255));
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetMarginLeft("10dp");
        mText->SetFontSize("14dp");
        mText->SetText("Pick A Color");
        mText->SetFont(_s(UiKit/fonts/SegoeUIVF.ttf));
        mText->SetTextColor(glm::vec4(50, 50, 50, 255));
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("16dp");
        mIcon->SetMarginRight("16dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(0, 0, 0, 255));
        mIcon->SetCharcode(59149);

}
