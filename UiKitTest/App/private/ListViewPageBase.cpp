#include "ListViewPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

ListViewPageBase::ListViewPageBase(e3::Element* pParent)
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
        pElement1->SetWidth("70%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetOrientation((e3::EOrientation)1);
                UiText* pCustomView1 = new UiText();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetText("ListView");
        pCustomView1->SetFontSize("24dp");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetText("The ListView lets you show a collection of items in a list that scrolls vertically.");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("Basic ListView with simple data.");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
                WidgetSection* pCustomView4 = new WidgetSection();
        pElement1->AddElement(pCustomView4);
        mListView = new UiListView();
        pCustomView4->AddElement(mListView);
        mListView->SetWidth("300dp");
        mListView->SetHeight("300dp");
        mListView->SetBorderColor(glm::vec4(0, 0, 0, 255));
        mListView->SetBorderSize(1);

}
