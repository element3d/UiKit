#include "UiNumberInputBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiNumberInputBase::UiNumberInputBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundColor(glm::vec4(248, 248, 248, 255));
        this->SetBorderRadius(4);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetHeight("31dp");
        e3::Input* pInput1 = e3::ViewFactory::CreateInput();
        AddElement(pInput1);
        pInput1->SetWidth("150dp");
        pInput1->SetHeight("31dp");
        pInput1->SetTextColor(glm::vec4(50, 50, 50, 255));
        pInput1->SetFontFamily("Segoe");
        pInput1->SetTextColor(glm::vec4(60, 60, 60, 255));
        pInput1->SetFontSize(14);
        pInput1->SetPaddingLeft(0);
        pInput1->SetOverflow((e3::EOverflow)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("30dp");
        pElement1->SetHeight("100%");
        pElement1->SetOrientation((e3::EOrientation)1);
                UiIcon* pCustomView1 = new UiIcon();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetCharcode(59150);
        pCustomView1->SetWidth("8dp");
        pCustomView1->SetAspectRatio(1.000000);
                UiIcon* pCustomView2 = new UiIcon();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetCharcode(59149);
        pCustomView2->SetWidth("8dp");
        pCustomView2->SetAspectRatio(1.000000);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("1dp");
        pElement2->SetBackgroundColor(UiColor::Primary);
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetBottom(0);
        pElement2->SetLeft(0);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        pElement3->SetPadding("4dp");
        pElement3->SetBackgroundColor(glm::vec4(245, 245, 245, 255));
        pElement3->SetBorderRadius(8);
        pElement3->SetBorderSize("1dp");
        pElement3->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement3->SetOrientation((e3::EOrientation)1);
        e3::ShadowParams pElement3ShadowParams;
        pElement3ShadowParams.Color = glm::vec4(150, 150, 150, 255);
        pElement3ShadowParams.BlurSize = 8;
        pElement3ShadowParams.Opacity = 1;
        pElement3ShadowParams.Scale = 1.0;
        pElement3ShadowParams.Offset = glm::ivec2(0, 2);
        pElement3->SetShadow(pElement3ShadowParams);
                UiAppBarButton* pCustomView3 = new UiAppBarButton();
        pElement3->AddElement(pCustomView3);
        pCustomView3->SetWidth("36dp");
        pCustomView3->SetHeight("36dp");
        pCustomView3->SetIcon(_s(E70E));
                UiAppBarButton* pCustomView4 = new UiAppBarButton();
        pElement3->AddElement(pCustomView4);
        pCustomView4->SetWidth("36dp");
        pCustomView4->SetHeight("36dp");
        pCustomView4->SetIcon(_s(E70D));

}
