#include "TabViewPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

TabViewPageBase::TabViewPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("TabView");
        pCustomView1->SetFontSize("30dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("The ListView lets you show a collection of items.");
        pCustomView2->SetFontSize("16dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("Basic ListView with simple data.");
        pCustomView3->SetFontSize("24dp");
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
        mTabView = new UiTabView();
        pElement2->AddElement(mTabView);
        mTabView->SetWidth("90%");
        mTabView->SetHeight("500dp");
        mTabView->SetBorderColor(glm::vec4(0, 0, 0, 255));
        mTabView->SetBorderSize(1);
                UiTabViewPage* pCustomView4 = new UiTabViewPage();
        mTabView->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(Document 1));
                UiText* pCustomView5 = new UiText();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetText("Page 1");
                UiTabViewPage* pCustomView6 = new UiTabViewPage();
        mTabView->AddElement(pCustomView6);
        pCustomView6->SetTitle(_s(Document 2));
                UiText* pCustomView7 = new UiText();
        pCustomView6->AddElement(pCustomView7);
        pCustomView7->SetText("Page 2");
                UiTabViewPage* pCustomView8 = new UiTabViewPage();
        mTabView->AddElement(pCustomView8);
        pCustomView8->SetTitle(_s(Document 3));
                UiText* pCustomView9 = new UiText();
        pCustomView8->AddElement(pCustomView9);
        pCustomView9->SetText("Page 3");

}
