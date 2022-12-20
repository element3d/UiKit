#include "NumberInputPageBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

NumberInputPageBase::NumberInputPageBase(e3::Element* pParent)
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
        pCustomView1->SetText("NumberInput");
        pCustomView1->SetFontStyle((e3::EFontStyle)16);
        pCustomView1->SetFontSize("24dp");
                UiText* pCustomView2 = new UiText();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetWidth("100%");
        pCustomView2->SetMaxNumLines(5);
        pCustomView2->SetTextAlignHor((e3::EAlignment)0);
        pCustomView2->SetText("The Expander has a header and can expand to show a body with more content. Use an Expander when some content is only relevant some of the time (for example to read more information or access additional options for an item).");
        pCustomView2->SetFontSize("14dp");
                UiText* pCustomView3 = new UiText();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("24dp");
        pCustomView3->SetText("A ComboBox with items defined inline and its width set.");
        pCustomView3->SetFontStyle((e3::EFontStyle)16);
        pCustomView3->SetFontSize("18dp");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetMinHeight("100dp");
        pElement2->SetMarginTop("20dp");
        pElement2->SetBorderSize("1dp");
        pElement2->SetBackgroundColor(glm::vec4(240, 240, 240, 255));
        pElement2->SetBorderColor(glm::vec4(220, 220, 220, 255));
        pElement2->SetBorderRadius(10);
        pElement2->SetPadding("20dp");
        pElement2->SetAlignItemsVer((e3::EAlignment)0);
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
                UiNumberInput* pCustomView4 = new UiNumberInput();
        pElement2->AddElement(pCustomView4);

}
