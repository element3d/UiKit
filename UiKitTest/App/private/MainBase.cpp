#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
    mDDBody = new UiDropDownBody();
                UiDropDownBodyItem* pCustomView1 = new UiDropDownBodyItem();
        mDDBody->AddElement(pCustomView1);
                UiDropDownBodyItem* pCustomView2 = new UiDropDownBodyItem();
        mDDBody->AddElement(pCustomView2);
                UiDropDownBodyItem* pCustomView3 = new UiDropDownBodyItem();
        mDDBody->AddElement(pCustomView3);
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
                UiButton* pCustomView4 = new UiButton();
        AddElement(pCustomView4);
                UiDropDownButton* pCustomView5 = new UiDropDownButton();
        AddElement(pCustomView5);
        pCustomView5->SetBody(mDDBody);
        pCustomView5->SetMarginTop("30dp");
                UiCheckBox* pCustomView6 = new UiCheckBox();
        AddElement(pCustomView6);
        pCustomView6->SetMarginTop("30dp");
                UiRadioButton* pCustomView7 = new UiRadioButton();
        AddElement(pCustomView7);
        pCustomView7->SetMarginTop("30dp");
                UiSwitch* pCustomView8 = new UiSwitch();
        AddElement(pCustomView8);
        pCustomView8->SetMarginTop("30dp");
                UiSlider* pCustomView9 = new UiSlider();
        AddElement(pCustomView9);
        pCustomView9->SetMarginTop("30dp");
        mTree = new UiTreeView();
        AddElement(mTree);
        mTree->SetMarginTop("30dp");

}
