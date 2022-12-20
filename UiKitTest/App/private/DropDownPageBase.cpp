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
        pElement1->SetWidth("100%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("DropDown");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("A control that drops down a flyout of choices from which one can be chosen.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("Simple DropDownButton");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
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
                UiText* pCustomView5 = new UiText();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetText("Email");
                UiDropDownBody* pCustomView6 = new UiDropDownBody();
        pCustomView4->AddElement(pCustomView6);
                UiDropDownItem* pCustomView7 = new UiDropDownItem();
        pCustomView6->AddElement(pCustomView7);
        pCustomView7->SetText("Send");
                UiDropDownItem* pCustomView8 = new UiDropDownItem();
        pCustomView6->AddElement(pCustomView8);
        pCustomView8->SetText("Reply");
                UiDropDownItem* pCustomView9 = new UiDropDownItem();
        pCustomView6->AddElement(pCustomView9);
        pCustomView9->SetText("Reply All");
                UiText* pCustomView10 = new UiText();
        pElement1->AddElement(pCustomView10);
        pCustomView10->SetMarginTop("24dp");
        pCustomView10->SetText("DropDownButton with icons");
        pCustomView10->SetFontStyle((e3::EFontStyle)16);
        pCustomView10->SetFontSize("18dp");
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
                UiDropDownButton* pCustomView11 = new UiDropDownButton();
        pElement3->AddElement(pCustomView11);
                UiIcon* pCustomView12 = new UiIcon();
        pCustomView11->AddElement(pCustomView12);
        pCustomView12->SetCharcode(59157);
        pCustomView12->SetWidth("18dp");
        pCustomView12->SetHeight("18dp");
                UiDropDownBody* pCustomView13 = new UiDropDownBody();
        pCustomView11->AddElement(pCustomView13);
                UiDropDownIconItem* pCustomView14 = new UiDropDownIconItem();
        pCustomView13->AddElement(pCustomView14);
        pCustomView14->SetIcon(_s(E725));
        pCustomView14->SetText("Send");
                UiDropDownIconItem* pCustomView15 = new UiDropDownIconItem();
        pCustomView13->AddElement(pCustomView15);
        pCustomView15->SetIcon(_s(E8CA));
        pCustomView15->SetText("Reply");
                UiDropDownIconItem* pCustomView16 = new UiDropDownIconItem();
        pCustomView13->AddElement(pCustomView16);
        pCustomView16->SetIcon(_s(E8C2));
        pCustomView16->SetText("Reply All");

}
