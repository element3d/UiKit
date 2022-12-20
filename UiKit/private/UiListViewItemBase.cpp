#include "UiListViewItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiListViewItemBase::UiListViewItemBase(e3::Element* pParent)
	: UiHoverable(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("36dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBorderRadius(4);
        this->SetMarginBottom("2dp");
        this->SetOverflow((e3::EOverflow)0);
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetHeight("16dp");
        mSelection->SetLeft("2dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetBackgroundColor(UiColor::Primary);
        mTitle = new UiText();
        AddElement(mTitle);
        mTitle->SetFontSize("14dp");
        mTitle->SetMarginLeft("12dp");
        mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));

}
