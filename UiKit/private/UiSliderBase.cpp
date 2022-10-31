#include "UiSliderBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiSliderBase::UiSliderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
    mBG = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG);
        mBG->SetWidth("100%");
        mBG->SetHeight("4dp");
        mBG->SetBackgroundColor(glm::vec4(150, 150, 150, 255));
        mBG->SetBorderRadius(0.5);
        mBG->SetPositionType((e3::EPositionType)1);
    mValue = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mValue);
        mValue->SetWidth(1);
        mValue->SetHeight("4dp");
        mValue->SetBackgroundColor(UiColor::Primary);
        mValue->SetBorderRadius(0.5);
        mValue->SetPositionType((e3::EPositionType)1);
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetWidth("20dp");
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderSize("1dp");
        mCircle->SetBorderColor(glm::vec4(220, 220, 220, 255));
        mCircle->SetBackgroundColor(glm::vec4(255));
        mCircle->SetBorderRadius(0.5);
    mInnerCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCircle->AddElement(mInnerCircle);
        mInnerCircle->SetWidth("10dp");
        mInnerCircle->SetAspectRatio(1.000000);
        mInnerCircle->SetBackgroundColor(UiColor::Primary);
        mInnerCircle->SetBorderRadius(0.5);

}
