#include "UiTreeViewItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemBase::UiTreeViewItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetMarginLeft("10dp");
        pElement1->SetMarginRight("10dp");
        pElement1->SetWidth("20dp");
        pElement1->SetHeight("20dp");
        pElement1->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetFontSize("14dp");
        mText->SetText("Item 1");

}
