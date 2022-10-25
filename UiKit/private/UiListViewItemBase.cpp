#include "UiListViewItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiListViewItemBase::UiListViewItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("36dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBorderRadius(4);
        this->SetMarginBottom("2dp");
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetHeight("16dp");
        mSelection->SetLeft("2dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetBackgroundColor(UiColor::Primary);
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("14dp");
        mTitle->SetMarginLeft("14dp");
        mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));

}
