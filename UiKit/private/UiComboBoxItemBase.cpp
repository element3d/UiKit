#include "UiComboBoxItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxItemBase::UiComboBoxItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetMinWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBorderRadius(4);
        this->SetMarginTop("2dp");
        this->SetMarginBottom("2dp");
        this->SetPaddingRight("14dp");
        this->SetOverflow((e3::EOverflow)0);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetPositionType((e3::EPositionType)1);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);
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
