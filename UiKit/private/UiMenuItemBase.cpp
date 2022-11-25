#include "UiMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiMenuItemBase::UiMenuItemBase(e3::Element* pParent)
	: UiHoverable(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetOverflow((e3::EOverflow)0);
        this->SetBorderRadius(4);
        this->SetMarginTop("4dp");
        this->SetMarginBottom("4dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mText = new UiText();
        AddElement(mText);
        mText->SetMarginLeft("10dp");

}
