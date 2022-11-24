#include "UiDropDownItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownItemBase::UiDropDownItemBase(e3::Element* pParent)
	: UiHoverable(pParent)
{
        this->SetMinWidth("90dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetHeight("30dp");
        this->SetMargin("4dp");
        this->SetBorderRadius(4);
        this->SetOverflow((e3::EOverflow)0);
        mText = new UiText();
        AddElement(mText);
        mText->SetMarginLeft("9dp");
        mText->SetText("Medium");
        mText->SetFontSize("14dp");

}
