#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetBackgroundColor(glm::vec4(243, 243, 243, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetPadding("8dp");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        mBackButton = new UiAppBarButton();
        pElement2->AddElement(mBackButton);
                UiText* pCustomView1 = new UiText();
        pElement2->AddElement(pCustomView1);
        pCustomView1->SetMarginLeft("12dp");
        pCustomView1->SetFontSize("12dp");
        pCustomView1->SetText("WinUI 3 Gallery");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("100%");
        pElement3->SetScaling((e3::EScaling)1);
        pElement3->SetAlignItemsVer((e3::EAlignment)0);
        mDrawer = new UiNavigationDrawer();
        pElement3->AddElement(mDrawer);
        mDrawer->SetAlignItemsHor((e3::EAlignment)0);
        mDrawer->SetPadding("4dp");
        mDrawerToggle = new UiAppBarButton();
        mDrawer->AddElement(mDrawerToggle);
        mDrawerToggle->SetIcon(_s(E700));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mDrawer->AddElement(pElement4);
        mSearch = new UiAppBarButton();
        pElement4->AddElement(mSearch);
        mSearch->SetVisibility((e3::EVisibility)2);
        mSearch->SetIcon(_s(E700));
    mSearchInput = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(mSearchInput);
        mSearchInput->SetWidth("100%");
        mSearchInput->SetHeight("40dp");
        mSearchInput->SetAlignItemsHor((e3::EAlignment)0);
                UiInput* pCustomView2 = new UiInput();
        mSearchInput->AddElement(pCustomView2);
        pCustomView2->SetWidth("100%");
        pCustomView2->SetMarginLeft("14dp");
        pCustomView2->SetMarginRight("14dp");
        pCustomView2->SetScaling((e3::EScaling)1);
        pCustomView2->SetMargin("0dp");
    mRouter = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(mRouter);
        mRouter->SetWidth("100%");
        mRouter->SetHeight("100%");
        mRouter->SetScaling((e3::EScaling)1);
        mRouter->SetBackgroundColor(glm::vec4(247, 247, 247, 255));
        mRouter->SetBorderRadius(10);
        mRouter->SetBorderSize("1dp");
        mRouter->SetBorderColor(glm::vec4(220, 220, 220, 255));

}
