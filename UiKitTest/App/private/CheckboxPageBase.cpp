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
        pElement1->SetWidth("70%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("CheckBox");
        pCustomView1->SetFontSize("30dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("The Button control provides a Click event to respond to user input from a touch, mouse, keyboard or other input device.");
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
        pElement3->SetHeight("100dp");
        pElement3->SetMarginTop("20dp");
        pElement3->SetBorderSize("1dp");
        pElement3->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement3->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement3->SetBorderRadius(10);
        pElement3->SetPadding("20dp");
        pElement3->SetAlignItemsHor((e3::EAlignment)0);
                UiCheckBox* pCustomView6 = new UiCheckBox();
        pElement3->AddElement(pCustomView6);

}
