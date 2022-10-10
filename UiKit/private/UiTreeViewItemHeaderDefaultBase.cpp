#include "UiTreeViewItemHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderDefaultBase::UiTreeViewItemHeaderDefaultBase(e3::Element* pParent)
	: UiTreeViewItemHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetHeight("60%");
        mSelection->SetBackgroundColor(UiColor::Primary);
        mSelection->SetPositionType((e3::EPositionType)1);
        mSelection->SetLeft("4dp");
        mSelection->SetVisibility((e3::EVisibility)1);
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("16dp");
        mIcon->SetMarginRight("16dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mIcon->SetCharcode(57361);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetFontSize("14dp");
        mText->SetTextColor(glm::vec4(50, 50, 50, 255));

}
