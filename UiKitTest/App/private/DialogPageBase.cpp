#include "DialogPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

DialogPageBase::DialogPageBase(e3::Element* pParent)
	: Page(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPadding("60dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("Dialog");
        pCustomView1->SetFontSize("24dp");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetText("Use Switch controls to present users with exactly two mutually exclusive options (like on/off), where choosing an option results in an immediate commit. A switch should have a single label.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A simple Switch");
        pCustomView3->SetFontSize("18dp");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
                WidgetSection* pCustomView4 = new WidgetSection();
        pElement1->AddElement(pCustomView4);
        mShowDialogButton = new UiButton();
        pCustomView4->AddElement(mShowDialogButton);
                UiText* pCustomView5 = new UiText();
        mShowDialogButton->AddElement(pCustomView5);
        pCustomView5->SetText("Show dialog");

}
