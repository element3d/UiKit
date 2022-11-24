#include "DropDownPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

DropDownPageBase::DropDownPageBase(e3::Element* pParent)
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
        pElement1->SetWidth("70%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("DropDown");
        pCustomView1->SetFontStyle((e3::EFontStyle)2);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("The Button control provides a Click event to respond to user input from a touch, mouse, keyboard or other input device.");
        pCustomView2->SetFontSize("16dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A simple Button with text content.");
        pCustomView3->SetFontStyle((e3::EFontStyle)2);
        pCustomView3->SetFontSize("20dp");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100dp");
        pElement2->SetMarginTop("20dp");
        pElement2->SetBorderSize("1dp");
        pElement2->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement2->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement2->SetBorderRadius(10);
        pElement2->SetPadding("20dp");
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
                UiDropDownButton* pCustomView4 = new UiDropDownButton();
        pElement2->AddElement(pCustomView4);
                UiDropDownBody* pCustomView5 = new UiDropDownBody();
        pCustomView4->AddElement(pCustomView5);
                UiDropDownItem* pCustomView6 = new UiDropDownItem();
        pCustomView5->AddElement(pCustomView6);
        pCustomView6->SetText("Send");
                UiDropDownItem* pCustomView7 = new UiDropDownItem();
        pCustomView5->AddElement(pCustomView7);
        pCustomView7->SetText("Reply");
                UiDropDownItem* pCustomView8 = new UiDropDownItem();
        pCustomView5->AddElement(pCustomView8);
        pCustomView8->SetText("Reply All");
                UiText* pCustomView9 = new UiText();
        pElement1->AddElement(pCustomView9);
        pCustomView9->SetMarginTop("30dp");
        pCustomView9->SetFontStyle((e3::EFontStyle)2);
        pCustomView9->SetText("A Button with graphical content.");
        pCustomView9->SetFontSize("20dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("100dp");
        pElement3->SetMarginTop("20dp");
        pElement3->SetBorderSize("1dp");
        pElement3->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement3->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement3->SetBorderRadius(10);
        pElement3->SetPadding("20dp");
        pElement3->SetAlignItemsHor((e3::EAlignment)0);
                UiButton* pCustomView10 = new UiButton();
        pElement3->AddElement(pCustomView10);
        pCustomView10->SetWidth("50dp");
        pCustomView10->SetHeight("50dp");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView10->AddElement(pElement4);
        pElement4->SetWidth("26dp");
        pElement4->SetHeight("26dp");
        pElement4->SetBackgroundImage("UiKitTest/Images/Slices.png");
                UiText* pCustomView11 = new UiText();
        pElement1->AddElement(pCustomView11);
        pCustomView11->SetMarginTop("30dp");
        pCustomView11->SetFontStyle((e3::EFontStyle)2);
        pCustomView11->SetText("Accent style applied to Button.");
        pCustomView11->SetFontSize("20dp");
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement5);
        pElement5->SetWidth("100%");
        pElement5->SetHeight("100dp");
        pElement5->SetMarginTop("20dp");
        pElement5->SetBorderSize("1dp");
        pElement5->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement5->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement5->SetBorderRadius(10);
        pElement5->SetPadding("20dp");
        pElement5->SetAlignItemsHor((e3::EAlignment)0);
                UiButtonDefault* pCustomView12 = new UiButtonDefault();
        pElement5->AddElement(pCustomView12);
        pCustomView12->SetStyle(UiAccent);
        pCustomView12->SetText("Standart Ui Button");

}
