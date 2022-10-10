#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
                UiComboBox* pCustomView1 = new UiComboBox();
        AddElement(pCustomView1);
        pCustomView1->SetWidth(200);
        pCustomView1->SetHeight(30);
        pCustomView1->SetBackgroundColor(glm::vec4(255, 0, 0, 255));
                UiComboBoxHeaderDefault* pCustomView2 = new UiComboBoxHeaderDefault();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(Combo Box));
                UiComboBoxBody* pCustomView3 = new UiComboBoxBody();
        pCustomView1->AddElement(pCustomView3);
                UiComboBoxItem* pCustomView4 = new UiComboBoxItem();
        pCustomView3->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(Item 1));
                UiComboBoxItem* pCustomView5 = new UiComboBoxItem();
        pCustomView3->AddElement(pCustomView5);
        pCustomView5->SetTitle(_s(Item 2));
                UiComboBoxItem* pCustomView6 = new UiComboBoxItem();
        pCustomView3->AddElement(pCustomView6);
        pCustomView6->SetTitle(_s(Item 3));
                UiExpander* pCustomView7 = new UiExpander();
        AddElement(pCustomView7);
        pCustomView7->SetMarginTop("30dp");
                UiExpanderHeaderDefault* pCustomView8 = new UiExpanderHeaderDefault();
        pCustomView7->AddElement(pCustomView8);
        pCustomView8->SetTitle(_s(Size));
                UiExpanderBody* pCustomView9 = new UiExpanderBody();
        pCustomView7->AddElement(pCustomView9);
        pCustomView9->SetWidth("100%");
        pCustomView9->SetHeight("100dp");
                UiListView* pCustomView10 = new UiListView();
        pCustomView9->AddElement(pCustomView10);
        pCustomView10->SetWidth("100%");
                UiListViewItem* pCustomView11 = new UiListViewItem();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Element));
                UiListViewItem* pCustomView12 = new UiListViewItem();
        pCustomView10->AddElement(pCustomView12);
        pCustomView12->SetTitle(_s(Text));
        mTree = new UiTreeView();
        AddElement(mTree);
        mTree->SetWidth(400);
        mTree->SetMarginTop("30dp");

}
