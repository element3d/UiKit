#include "MenuButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MenuButtonBase::MenuButtonBase(e3::Element* pParent)
	: UiButton(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("80dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetPadding("20dp");
        this->SetOverflow((e3::EOverflow)0);
    mImage = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mImage);
        mImage->SetWidth("50dp");
        mImage->SetAspectRatio(1.000000);
        mImage->SetBackgroundImage("UiKitTest/Images/ControlImages/Button.png");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetMarginLeft("20dp");
        pElement1->SetOrientation((e3::EOrientation)1);
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        mTitle = new UiText();
        pElement1->AddElement(mTitle);
        mTitle->SetText("Button");
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mDesc = new UiText();
        pElement1->AddElement(mDesc);
        mDesc->SetText("A control that responds a user input and raises a click event");
        mDesc->SetFontSize("12dp");
        mDesc->SetTextColor(glm::vec4(100, 100, 100, 255));
        mDesc->SetFontStyle((e3::EFontStyle)2);
        mDesc->SetMaxNumLines(2);

}
