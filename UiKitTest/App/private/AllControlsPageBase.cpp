#include "AllControlsPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

AllControlsPageBase::AllControlsPageBase(e3::Element* pParent)
	: Page(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPadding("60dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("200dp");
        pElement1->SetBorderRadius(10);
        pElement1->SetBackgroundImageFit((e3::EBackgroundSize)1);
        pElement1->SetBackgroundImage("UiKitTest/Images/MainPage_Banner.png");
    mMenu = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mMenu);
        mMenu->SetMarginTop("20dp");
        mMenu->SetWidth("100%");
        mMenu->SetOrientation((e3::EOrientation)1);
        mMenu->SetAlignItemsHor((e3::EAlignment)0);

}
