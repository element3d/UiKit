#include "UiComboBoxHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxHeaderDefaultBase::UiComboBoxHeaderDefaultBase(e3::Element* pParent)
	: UiComboBoxHeader(pParent)
{
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(glm::vec4(252, 252, 252, 255));
        this->SetBorderRadius(3);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        mText = new UiText();
        AddElement(mText);
        mText->SetMarginLeft("10dp");
        mText->SetFontSize("14dp");
        mText->SetText("Pick A Color");
        mText->SetTextColor(glm::vec4(50, 50, 50, 255));
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
        mIconCont->SetWidth("16dp");
        mIconCont->SetHeight("18dp");
        mIconCont->SetMarginLeft("2dp");
        mIconCont->SetMarginRight("2dp");
        mIconCont->SetBorderRadius(4);
        mIconCont->SetBackgroundColor(glm::vec4(60, 60, 67, 0.18 * 255));
        mIcon = new UiIcon();
        mIconCont->AddElement(mIcon);
        mIcon->SetWidth("8dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(0, 0, 0, 255));
        mIcon->SetCharcode(59149);

}
