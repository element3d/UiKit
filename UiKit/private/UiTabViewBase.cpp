#include "UiTabViewBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTabViewBase::UiTabViewBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetOverflow((e3::EOverflow)0);
    mTabs = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mTabs);
        mTabs->SetWidth("100%");
        mTabs->SetHeight("31dp");
        mTabs->SetOverflow((e3::EOverflow)2);
        mTabs->SetAlignItemsVer((e3::EAlignment)2);
    mTabCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mTabs->AddElement(mTabCont);
        mTabCont->SetHeight("31dp");
        mAdd = new UiHoverable();
        mTabs->AddElement(mAdd);
        mAdd->SetWidth(32);
        mAdd->SetHeight(24);
        mAdd->SetOverflow((e3::EOverflow)0);
        mAdd->SetBorderRadius(7);
        mAdd->SetMarginLeft("7dp");
        mAdd->SetMarginRight("7dp");
                UiIcon* pCustomView1 = new UiIcon();
        mAdd->AddElement(pCustomView1);
        pCustomView1->SetWidth("12dp");
        pCustomView1->SetHeight("12dp");
        pCustomView1->SetColor(glm::vec4(50, 50, 50, 255));
        pCustomView1->SetCharcode(59152);
    mPageCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mPageCont);
        mPageCont->SetWidth("100%");
        mPageCont->SetHeight("100%");
        mPageCont->SetScaling((e3::EScaling)1);
        mPageCont->SetBackgroundColor(glm::vec4(255, 255, 255, 255));

}
