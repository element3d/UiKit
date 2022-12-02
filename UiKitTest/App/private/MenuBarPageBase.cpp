#include "MenuBarPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MenuBarPageBase::MenuBarPageBase(e3::Element* pParent)
	: Page(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPadding("60dp");
        this->SetOverflow((e3::EOverflow)2);
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
        pCustomView1->SetText("MenuBar");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("The ListView lets you show a collection of items.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("Basic ListView with simple data.");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetMinHeight("100dp");
        pElement2->SetMarginTop("20dp");
        pElement2->SetBorderSize("1dp");
        pElement2->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement2->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement2->SetBorderRadius(10);
        pElement2->SetPadding("20dp");
        pElement2->SetAlignItemsVer((e3::EAlignment)0);
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
                UiMenuBar* pCustomView4 = new UiMenuBar();
        pElement2->AddElement(pCustomView4);
                UiMenu* pCustomView5 = new UiMenu();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetText("File");
                UiMenuItem* pCustomView6 = new UiMenuItem();
        pCustomView5->AddElement(pCustomView6);
        pCustomView6->SetText("New");
                UiMenuItem* pCustomView7 = new UiMenuItem();
        pCustomView5->AddElement(pCustomView7);
        pCustomView7->SetText("Open");
                UiMenuItem* pCustomView8 = new UiMenuItem();
        pCustomView5->AddElement(pCustomView8);
        pCustomView8->SetText("Save");
                UiMenuItem* pCustomView9 = new UiMenuItem();
        pCustomView5->AddElement(pCustomView9);
        pCustomView9->SetText("Exit");
                UiMenu* pCustomView10 = new UiMenu();
        pCustomView4->AddElement(pCustomView10);
        pCustomView10->SetText("Edit");
                UiMenuItem* pCustomView11 = new UiMenuItem();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetText("Undo");
                UiMenuItem* pCustomView12 = new UiMenuItem();
        pCustomView10->AddElement(pCustomView12);
        pCustomView12->SetText("Cut");
                UiMenuItem* pCustomView13 = new UiMenuItem();
        pCustomView10->AddElement(pCustomView13);
        pCustomView13->SetText("Copy");
                UiMenuItem* pCustomView14 = new UiMenuItem();
        pCustomView10->AddElement(pCustomView14);
        pCustomView14->SetText("Paste");
                UiMenu* pCustomView15 = new UiMenu();
        pCustomView4->AddElement(pCustomView15);
        pCustomView15->SetText("Help");

}
