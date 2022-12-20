#include "RadioButtonPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

RadioButtonPageBase::RadioButtonPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("RadioButton");
        pCustomView1->SetFontSize("24dp");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetText("Use RadioButton to let a user choose between exclusive, related options.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A ComboBox with items defined inline and its width set.");
        pCustomView3->SetFontSize("18dp");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
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
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
                UiRadioButton* pCustomView4 = new UiRadioButton();
        pElement3->AddElement(pCustomView4);
        pCustomView4->SetGroup(_s(test));
                UiText* pCustomView5 = new UiText();
        pElement3->AddElement(pCustomView5);
        pCustomView5->SetMarginLeft("10dp");
        pCustomView5->SetText("Option 1");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement4);
        pElement4->SetMarginTop("10dp");
                UiRadioButton* pCustomView6 = new UiRadioButton();
        pElement4->AddElement(pCustomView6);
        pCustomView6->SetGroup(_s(test));
                UiText* pCustomView7 = new UiText();
        pElement4->AddElement(pCustomView7);
        pCustomView7->SetMarginLeft("10dp");
        pCustomView7->SetText("Option 2");
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement5);
        pElement5->SetMarginTop("10dp");
                UiRadioButton* pCustomView8 = new UiRadioButton();
        pElement5->AddElement(pCustomView8);
        pCustomView8->SetGroup(_s(test));
                UiText* pCustomView9 = new UiText();
        pElement5->AddElement(pCustomView9);
        pCustomView9->SetMarginLeft("10dp");
        pCustomView9->SetText("Option 3");

}
