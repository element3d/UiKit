#include "UiTabBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTabBase::UiTabBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetHeight("100%");
        this->SetWidth("180dp");
        this->SetBorderRadius(glm::vec4(7, 7, 0, 0));
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(0, 0, 0, 23));
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(glm::vec4(249, 249, 249, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        mIcon = new UiIcon();
        pElement1->AddElement(mIcon);
        mIcon->SetMarginLeft("10dp");
        mIcon->SetMarginRight("10dp");
        mIcon->SetWidth("16dp");
        mIcon->SetHeight("16dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetCharcode(59557);
        mTitle = new UiText();
        pElement1->AddElement(mTitle);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
                UiHoverable* pCustomView1 = new UiHoverable();
        pElement2->AddElement(pCustomView1);
        pCustomView1->SetWidth(32);
        pCustomView1->SetHeight(24);
        pCustomView1->SetOverflow((e3::EOverflow)0);
        pCustomView1->SetBorderRadius(7);
        pCustomView1->SetMarginLeft("10dp");
        pCustomView1->SetMarginRight("10dp");
        mClose = new UiIcon();
        pCustomView1->AddElement(mClose);
        mClose->SetWidth("8dp");
        mClose->SetHeight("8dp");
        mClose->SetColor(glm::vec4(50, 50, 50, 255));
        mClose->SetCharcode(59579);

}
