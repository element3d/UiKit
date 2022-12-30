#include "CheckboxPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

CheckboxPageBase::CheckboxPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("CheckBox");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetText("CheckBox control let the user select a combination of binary options. In contrast, RadioButton control allow the user to select from mutually exclusive options. The indeterminate state is used to indicate that an option is set for some, but not all, child oprions. Don't allow user to set indeterminate state directly to indicate a third option.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A 2-state CheckBox.");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
                WidgetSection* pCustomView4 = new WidgetSection();
        pElement1->AddElement(pCustomView4);
                UiCheckBox* pCustomView5 = new UiCheckBox();
        pCustomView4->AddElement(pCustomView5);
                UiText* pCustomView6 = new UiText();
        pElement1->AddElement(pCustomView6);
        pCustomView6->SetMarginTop("30dp");
        pCustomView6->SetText("A 3-state CheckBox.");
        pCustomView6->SetFontStyle((e3::EFontStyle)16);
        pCustomView6->SetFontSize("18dp");
                WidgetSection* pCustomView7 = new WidgetSection();
        pElement1->AddElement(pCustomView7);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView7->AddElement(pElement2);
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
                UiCheckBox* pCustomView8 = new UiCheckBox();
        pElement3->AddElement(pCustomView8);
        pCustomView8->SetIsThreeState(true);
        pCustomView8->SetGroup(_s(Group1));
                UiText* pCustomView9 = new UiText();
        pElement3->AddElement(pCustomView9);
        pCustomView9->SetText("Select All");
        pCustomView9->SetMarginLeft("10dp");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement4);
        pElement4->SetMarginTop("10dp");
        pElement4->SetMarginLeft("10dp");
                UiCheckBox* pCustomView10 = new UiCheckBox();
        pElement4->AddElement(pCustomView10);
        pCustomView10->SetGroup(_s(Group1));
                UiText* pCustomView11 = new UiText();
        pElement4->AddElement(pCustomView11);
        pCustomView11->SetText("Option 1");
        pCustomView11->SetMarginLeft("10dp");
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement5);
        pElement5->SetMarginTop("10dp");
        pElement5->SetMarginLeft("10dp");
                UiCheckBox* pCustomView12 = new UiCheckBox();
        pElement5->AddElement(pCustomView12);
        pCustomView12->SetGroup(_s(Group1));
                UiText* pCustomView13 = new UiText();
        pElement5->AddElement(pCustomView13);
        pCustomView13->SetText("Option 2");
        pCustomView13->SetMarginLeft("10dp");
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement6);
        pElement6->SetMarginTop("10dp");
        pElement6->SetMarginLeft("10dp");
                UiCheckBox* pCustomView14 = new UiCheckBox();
        pElement6->AddElement(pCustomView14);
        pCustomView14->SetGroup(_s(Group1));
                UiText* pCustomView15 = new UiText();
        pElement6->AddElement(pCustomView15);
        pCustomView15->SetText("Option 3");
        pCustomView15->SetMarginLeft("10dp");

}
