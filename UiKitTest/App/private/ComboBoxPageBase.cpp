#include "ComboBoxPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

ComboBoxPageBase::ComboBoxPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("ComboBox");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetText("Use a ComboBox when you need to conserve on-screen space and when users select only option at time. A ComboBox shows only the currently selected item.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A ComboBox with items defined inline and its width set.");
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
        pElement2->SetOrientation((e3::EOrientation)1);
                UiComboBox* pCustomView4 = new UiComboBox();
        pElement2->AddElement(pCustomView4);
                UiComboBoxHeaderDefault* pCustomView5 = new UiComboBoxHeaderDefault();
        pCustomView4->AddElement(pCustomView5);
                UiComboBoxBody* pCustomView6 = new UiComboBoxBody();
        pCustomView4->AddElement(pCustomView6);
                UiComboBoxItem* pCustomView7 = new UiComboBoxItem();
        pCustomView6->AddElement(pCustomView7);
        pCustomView7->SetTitle(_s(Arial));
                UiComboBoxItem* pCustomView8 = new UiComboBoxItem();
        pCustomView6->AddElement(pCustomView8);
        pCustomView8->SetTitle(_s(Comic Sans MS));
                UiComboBoxItem* pCustomView9 = new UiComboBoxItem();
        pCustomView6->AddElement(pCustomView9);
        pCustomView9->SetTitle(_s(Courier New));
                UiComboBoxItem* pCustomView10 = new UiComboBoxItem();
        pCustomView6->AddElement(pCustomView10);
        pCustomView10->SetTitle(_s(Segoe UI));
                UiComboBoxItem* pCustomView11 = new UiComboBoxItem();
        pCustomView6->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Times New Roman));

}
