#include "ButtonPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

ButtonPageBase::ButtonPageBase(e3::Element* pParent)
	: Page(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPadding("60dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("Button");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetFontStyle((e3::EFontStyle)0);
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetText("The Button control provides a Click event to respond to user input from a touch, mouse, keyboard or other input device. You can put different kinds of content in a button, such as text or an image, or you can restyle a button to give it a new look.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A simple Button with text content.");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
                WidgetSection* pCustomView4 = new WidgetSection();
        pElement1->AddElement(pCustomView4);
                UiButtonDefault* pCustomView5 = new UiButtonDefault();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetText("BUTTON");
                UiText* pCustomView6 = new UiText();
        pElement1->AddElement(pCustomView6);
        pCustomView6->SetMarginTop("30dp");
        pCustomView6->SetFontStyle((e3::EFontStyle)16);
        pCustomView6->SetText("A Button with graphical content.");
        pCustomView6->SetFontSize("18dp");
                WidgetSection* pCustomView7 = new WidgetSection();
        pElement1->AddElement(pCustomView7);
                UiButton* pCustomView8 = new UiButton();
        pCustomView7->AddElement(pCustomView8);
        pCustomView8->SetWidth("50dp");
        pCustomView8->SetHeight("50dp");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView8->AddElement(pElement2);
        pElement2->SetWidth("26dp");
        pElement2->SetHeight("26dp");
        pElement2->SetBackgroundImage("UiKitTest/Images/Slices.png");
                UiText* pCustomView9 = new UiText();
        pElement1->AddElement(pCustomView9);
        pCustomView9->SetMarginTop("30dp");
        pCustomView9->SetFontStyle((e3::EFontStyle)16);
        pCustomView9->SetText("Accent style applied to Button.");
        pCustomView9->SetFontSize("18dp");
                WidgetSection* pCustomView10 = new WidgetSection();
        pElement1->AddElement(pCustomView10);
                UiButtonDefault* pCustomView11 = new UiButtonDefault();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetStyle(UiAccent);
        pCustomView11->SetText("Standart Ui Button");

}
