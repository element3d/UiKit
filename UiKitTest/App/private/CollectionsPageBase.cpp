#include "CollectionsPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

CollectionsPageBase::CollectionsPageBase(e3::Element* pParent)
	: Page(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPadding("60dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
                UiText* pCustomView1 = new UiText();
        AddElement(pCustomView1);
        pCustomView1->SetText("Collections");
        pCustomView1->SetFontSize("26dp");
        pCustomView1->SetFontStyle((e3::EFontStyle)2);
    mMenu = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mMenu);
        mMenu->SetMarginTop("20dp");
        mMenu->SetWidth("100%");
        mMenu->SetOrientation((e3::EOrientation)1);
        mMenu->SetAlignItemsHor((e3::EAlignment)0);

}
