#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
                UiExpander* pCustomView1 = new UiExpander();
        AddElement(pCustomView1);
        pCustomView1->SetMarginTop("30dp");
                UiExpanderBody* pCustomView2 = new UiExpanderBody();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetWidth("100%");
        pCustomView2->SetHeight("100dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pCustomView2->AddElement(pText1);
        pText1->SetText("Expander");
        pText1->SetFontSize("16dp");
        mTree = new UiTreeView();
        AddElement(mTree);
        mTree->SetMarginTop("30dp");

}
