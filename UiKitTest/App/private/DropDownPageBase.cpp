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
                WidgetSection* pCustomView4 = new WidgetSection();
        pElement1->AddElement(pCustomView4);
                UiDropDownButton* pCustomView5 = new UiDropDownButton();
        pCustomView4->AddElement(pCustomView5);
                UiText* pCustomView6 = new UiText();
        pCustomView5->AddElement(pCustomView6);
        pCustomView6->SetText("Email");
                UiDropDownBody* pCustomView7 = new UiDropDownBody();
        pCustomView5->AddElement(pCustomView7);
                UiDropDownItem* pCustomView8 = new UiDropDownItem();
        pCustomView7->AddElement(pCustomView8);
        pCustomView8->SetText("Send");
                UiDropDownItem* pCustomView9 = new UiDropDownItem();
        pCustomView7->AddElement(pCustomView9);
        pCustomView9->SetText("Reply");
                UiDropDownItem* pCustomView10 = new UiDropDownItem();
        pCustomView7->AddElement(pCustomView10);
        pCustomView10->SetText("Reply All");
                UiText* pCustomView11 = new UiText();
        pElement1->AddElement(pCustomView11);
        pCustomView11->SetMarginTop("24dp");
        pCustomView11->SetText("DropDownButton with icons");
        pCustomView11->SetFontStyle((e3::EFontStyle)16);
        pCustomView11->SetFontSize("18dp");
                WidgetSection* pCustomView12 = new WidgetSection();
        pElement1->AddElement(pCustomView12);
                UiDropDownButton* pCustomView13 = new UiDropDownButton();
        pCustomView12->AddElement(pCustomView13);
                UiIcon* pCustomView14 = new UiIcon();
        pCustomView13->AddElement(pCustomView14);
        pCustomView14->SetCharcode(59157);
        pCustomView14->SetWidth("18dp");
        pCustomView14->SetHeight("18dp");
                UiDropDownBody* pCustomView15 = new UiDropDownBody();
        pCustomView13->AddElement(pCustomView15);
                UiDropDownIconItem* pCustomView16 = new UiDropDownIconItem();
        pCustomView15->AddElement(pCustomView16);
        pCustomView16->SetIcon(_s(E725));
        pCustomView16->SetText("Send");
                UiDropDownIconItem* pCustomView17 = new UiDropDownIconItem();
        pCustomView15->AddElement(pCustomView17);
        pCustomView17->SetIcon(_s(E8CA));
        pCustomView17->SetText("Reply");
                UiDropDownIconItem* pCustomView18 = new UiDropDownIconItem();
        pCustomView15->AddElement(pCustomView18);
        pCustomView18->SetIcon(_s(E8C2));
        pCustomView18->SetText("Reply All");

}
