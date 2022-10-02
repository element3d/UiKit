#include "UiExpanderBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiExpanderBase::UiExpanderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOrientation((e3::EOrientation)1);
    mHeader = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHeader);
        mHeader->SetWidth("100%");
        mHeader->SetHeight("30dp");
        mHeader->SetAlignItemsHor((e3::EAlignment)3);
        mText = e3::ViewFactory::CreateText();
        mHeader->AddElement(mText);
        mText->SetMarginLeft("10dp");
        mText->SetFontSize("14dp");
        mText->SetText("Item 1");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mHeader->AddElement(pElement1);
        pElement1->SetMarginLeft("10dp");
        pElement1->SetMarginRight("10dp");
        pElement1->SetWidth("20dp");
        pElement1->SetHeight("20dp");
        pElement1->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
    mBody = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBody);
        mBody->SetOrientation((e3::EOrientation)1);
        mBody->SetWidth("100%");

}
