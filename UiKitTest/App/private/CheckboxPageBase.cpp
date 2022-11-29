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
        pCustomView1->SetFontSize("30dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetText("CheckBox control let the user select a combination of binary options. In contrast, RadioButton control allow the user to select from mutually exclusive options. The indeterminate state is used to indicate that an option is set for some, but not all, child oprions. Don't allow user to set indeterminate state directly to indicate a third option.");
        pCustomView2->SetFontSize("16dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A 2-state CheckBox.");
        pCustomView3->SetFontSize("24dp");
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
                UiCheckBox* pCustomView4 = new UiCheckBox();
        pElement2->AddElement(pCustomView4);
                UiText* pCustomView5 = new UiText();
        pElement1->AddElement(pCustomView5);
        pCustomView5->SetMarginTop("30dp");
        pCustomView5->SetText("A 3-state CheckBox.");
        pCustomView5->SetFontSize("24dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetMarginTop("20dp");
        pElement3->SetBorderSize("1dp");
        pElement3->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement3->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement3->SetBorderRadius(10);
        pElement3->SetPadding("20dp");
        pElement3->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(pElement4);
        pElement4->SetOrientation((e3::EOrientation)1);
        pElement4->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement5);
                UiCheckBox* pCustomView6 = new UiCheckBox();
        pElement5->AddElement(pCustomView6);
        pCustomView6->SetIsThreeState(true);
        pCustomView6->SetGroup(_s(Group1));
                UiText* pCustomView7 = new UiText();
        pElement5->AddElement(pCustomView7);
        pCustomView7->SetText("Select All");
        pCustomView7->SetMarginLeft("10dp");
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement6);
        pElement6->SetMarginTop("10dp");
        pElement6->SetMarginLeft("10dp");
                UiCheckBox* pCustomView8 = new UiCheckBox();
        pElement6->AddElement(pCustomView8);
        pCustomView8->SetGroup(_s(Group1));
                UiText* pCustomView9 = new UiText();
        pElement6->AddElement(pCustomView9);
        pCustomView9->SetText("Option 1");
        pCustomView9->SetMarginLeft("10dp");
    e3::Element* pElement7 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement7);
        pElement7->SetMarginTop("10dp");
        pElement7->SetMarginLeft("10dp");
                UiCheckBox* pCustomView10 = new UiCheckBox();
        pElement7->AddElement(pCustomView10);
        pCustomView10->SetGroup(_s(Group1));
                UiText* pCustomView11 = new UiText();
        pElement7->AddElement(pCustomView11);
        pCustomView11->SetText("Option 2");
        pCustomView11->SetMarginLeft("10dp");
    e3::Element* pElement8 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement8);
        pElement8->SetMarginTop("10dp");
        pElement8->SetMarginLeft("10dp");
                UiCheckBox* pCustomView12 = new UiCheckBox();
        pElement8->AddElement(pCustomView12);
        pCustomView12->SetGroup(_s(Group1));
                UiText* pCustomView13 = new UiText();
        pElement8->AddElement(pCustomView13);
        pCustomView13->SetText("Option 3");
        pCustomView13->SetMarginLeft("10dp");

}
