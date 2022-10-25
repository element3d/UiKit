#include "UiCheckBoxBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiCheckBoxBase::UiCheckBoxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("22dp");
        this->SetHeight("22dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(4);
        this->SetBorderColor(glm::vec4(100, 100, 100, 255));
    mCheck = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCheck);
        mCheck->SetVisibility((e3::EVisibility)1);
        mCheck->SetMarginBottom("6dp");
        mCheck->SetMarginRight("2dp");
        mCheck->SetWidth("60%");
        mCheck->SetHeight("60%");
        mCheck->SetBackgroundColor(glm::vec4(255, 0, 0, 0));
        mCheck->SetOrientation((e3::EOrientation)1);
        mCheck->SetAlignItemsHor((e3::EAlignment)0);
        mCheck->SetAlignItemsVer((e3::EAlignment)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCheck->AddElement(pElement1);
        pElement1->SetWidth("2dp");
        pElement1->SetHeight("50%");
        pElement1->SetBackgroundColor(UiColor::White);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCheck->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("2dp");
        pElement2->SetBackgroundColor(UiColor::White);

}
