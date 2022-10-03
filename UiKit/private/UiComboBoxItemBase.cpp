#include "UiComboBoxItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxItemBase::UiComboBoxItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetHeight("30dp");
        this->SetWidth("100%");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetFontSize("14dp");
        mText->SetMarginLeft("10dp");

}
