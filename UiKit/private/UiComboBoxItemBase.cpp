#include "UiComboBoxItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxItemBase::UiComboBoxItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("34dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBorderRadius(4);
        this->SetMarginTop("2dp");
        this->SetMarginBottom("2dp");
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetHeight("18dp");
        mSelection->SetLeft("2dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetBackgroundColor(UiColor::Primary);
        mTitle = new UiText();
        AddElement(mTitle);
        mTitle->SetMarginLeft("14dp");

}
