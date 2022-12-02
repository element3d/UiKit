#include "TreeViewPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

TreeViewPageBase::TreeViewPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("TreeView");
        pCustomView1->SetFontSize("24dp");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("Use a ComboBox when you need to conserve on-screen space and when users select only option at time.");
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
        pElement2->SetMarginTop("20dp");
        pElement2->SetBorderSize("1dp");
        pElement2->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement2->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement2->SetBorderRadius(10);
        pElement2->SetPadding("20dp");
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
        pElement2->SetOrientation((e3::EOrientation)1);
        mTreeView = new UiTreeView();
        pElement2->AddElement(mTreeView);
                UiTreeViewItem* pCustomView4 = new UiTreeViewItem();
        mTreeView->AddElement(pCustomView4);
                UiTreeViewItemHeaderDefault* pCustomView5 = new UiTreeViewItemHeaderDefault();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetTitle(_s(Work Documents));
                UiTreeViewItem* pCustomView6 = new UiTreeViewItem();
        pCustomView4->AddElement(pCustomView6);
                UiTreeViewItemHeaderDefault* pCustomView7 = new UiTreeViewItemHeaderDefault();
        pCustomView6->AddElement(pCustomView7);
        pCustomView7->SetTitle(_s(XYZ Functional Spec));
                UiTreeViewItem* pCustomView8 = new UiTreeViewItem();
        pCustomView4->AddElement(pCustomView8);
                UiTreeViewItemHeaderDefault* pCustomView9 = new UiTreeViewItemHeaderDefault();
        pCustomView8->AddElement(pCustomView9);
        pCustomView9->SetTitle(_s(Feature Schedule));
                UiTreeViewItem* pCustomView10 = new UiTreeViewItem();
        pCustomView4->AddElement(pCustomView10);
                UiTreeViewItemHeaderDefault* pCustomView11 = new UiTreeViewItemHeaderDefault();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Overall Project Plan));
                UiTreeViewItem* pCustomView12 = new UiTreeViewItem();
        pCustomView4->AddElement(pCustomView12);
                UiTreeViewItemHeaderDefault* pCustomView13 = new UiTreeViewItemHeaderDefault();
        pCustomView12->AddElement(pCustomView13);
        pCustomView13->SetTitle(_s(Feature Resource Allocation));
                UiTreeViewItem* pCustomView14 = new UiTreeViewItem();
        mTreeView->AddElement(pCustomView14);
                UiTreeViewItemHeaderDefault* pCustomView15 = new UiTreeViewItemHeaderDefault();
        pCustomView14->AddElement(pCustomView15);
        pCustomView15->SetTitle(_s(Personal Documents));
                UiTreeViewItem* pCustomView16 = new UiTreeViewItem();
        pCustomView14->AddElement(pCustomView16);
                UiTreeViewItemHeaderDefault* pCustomView17 = new UiTreeViewItemHeaderDefault();
        pCustomView16->AddElement(pCustomView17);
        pCustomView17->SetTitle(_s(Home Remodel));
                UiTreeViewItem* pCustomView18 = new UiTreeViewItem();
        pCustomView16->AddElement(pCustomView18);
                UiTreeViewItemHeaderDefault* pCustomView19 = new UiTreeViewItemHeaderDefault();
        pCustomView18->AddElement(pCustomView19);
        pCustomView19->SetTitle(_s(Contractor Contact Info));
                UiTreeViewItem* pCustomView20 = new UiTreeViewItem();
        pCustomView16->AddElement(pCustomView20);
                UiTreeViewItemHeaderDefault* pCustomView21 = new UiTreeViewItemHeaderDefault();
        pCustomView20->AddElement(pCustomView21);
        pCustomView21->SetTitle(_s(Paint Color Scheme));
                UiTreeViewItem* pCustomView22 = new UiTreeViewItem();
        pCustomView16->AddElement(pCustomView22);
                UiTreeViewItemHeaderDefault* pCustomView23 = new UiTreeViewItemHeaderDefault();
        pCustomView22->AddElement(pCustomView23);
        pCustomView23->SetTitle(_s(Flooring woodgrain type));
                UiTreeViewItem* pCustomView24 = new UiTreeViewItem();
        pCustomView16->AddElement(pCustomView24);
                UiTreeViewItemHeaderDefault* pCustomView25 = new UiTreeViewItemHeaderDefault();
        pCustomView24->AddElement(pCustomView25);
        pCustomView25->SetTitle(_s(Citchen cabinet style));

}
