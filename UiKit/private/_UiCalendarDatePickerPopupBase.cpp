#include "_UiCalendarDatePickerPopupBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

_UiCalendarDatePickerPopupBase::_UiCalendarDatePickerPopupBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBorderRadius(8);
        this->SetBorderSize(1);
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetBackgroundColor(glm::vec4(255, 255, 255, 255));
        this->SetPositionType((e3::EPositionType)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOrientation((e3::EOrientation)1);
        this->SetTop(0);
        this->SetLeft(0);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 255);
        ShadowParams.BlurSize = 20;
        ShadowParams.Opacity = 1;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 5);
        SetShadow(ShadowParams);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("50dp");
        pElement1->SetAlignItemsHor((e3::EAlignment)3);
        mMonth = new UiText();
        pElement1->AddElement(mMonth);
        mMonth->SetFontStyle((e3::EFontStyle)16);
        mMonth->SetFontSize(14);
        mMonth->SetMarginLeft("20dp");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        mPrev = new UiAppBarButton();
        pElement2->AddElement(mPrev);
        mPrev->SetWidth("36dp");
        mPrev->SetHeight("36dp");
        mPrev->SetIcon(_s(E935));
        mNext = new UiAppBarButton();
        pElement2->AddElement(mNext);
        mNext->SetWidth("36dp");
        mNext->SetHeight("36dp");
        mNext->SetMarginLeft("2dp");
        mNext->SetMarginRight("6dp");
        mNext->SetIcon(_s(E936));
                UiDivider* pCustomView1 = new UiDivider();
        AddElement(pCustomView1);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("312dp");
        pElement3->SetOverflow((e3::EOverflow)0);
        pElement3->SetOrientation((e3::EOrientation)1);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(mContent);
        mContent->SetPadding("2dp");
        mContent->SetWidth("100%");
        mContent->SetAlignItemsVer((e3::EAlignment)0);
        mContent->SetOrientation((e3::EOrientation)1);

}
