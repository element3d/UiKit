#include "UiDropDownBodyItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownBodyItemBase::UiDropDownBodyItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetPaddingLeft("14dp");
        this->SetPaddingRight("28dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        AddElement(pText1);
        pText1->SetText("Medium");
        pText1->SetFontSize("14dp");

}
