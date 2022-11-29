#include "UiDropDownIconItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownIconItemBase::UiDropDownIconItemBase(e3::Element* pParent)
	: UiHoverable(pParent)
{
        this->SetMinWidth("90dp");
        this->SetWidth("100%");
        this->SetScaling((e3::EScaling)1);
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetHeight("30dp");
        this->SetMarginTop("4dp");
        this->SetMarginBottom("4dp");
        this->SetBorderRadius(4);
        this->SetOverflow((e3::EOverflow)0);
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("9dp");
        mIcon->SetWidth("18dp");
        mIcon->SetHeight("18dp");
        mText = new UiText();
        AddElement(mText);
        mText->SetMarginLeft("9dp");
        mText->SetMarginRight("9dp");
        mText->SetFontSize("14dp");

}
