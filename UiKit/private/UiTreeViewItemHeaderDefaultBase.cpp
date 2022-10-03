#include "UiTreeViewItemHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderDefaultBase::UiTreeViewItemHeaderDefaultBase(e3::Element* pParent)
	: UiTreeViewItemHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("10dp");
        mIcon->SetMarginRight("10dp");
        mIcon->SetWidth("10dp");
        mIcon->SetHeight("10dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mIcon->SetCharcode(57361);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetFontSize("14dp");

}
