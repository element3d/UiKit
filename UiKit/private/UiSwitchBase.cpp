#include "UiSwitchBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiSwitchBase::UiSwitchBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("38dp");
        this->SetHeight("18dp");
        this->SetPadding("4dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(0.5);
        this->SetBorderColor(glm::vec4(120, 120, 120, 255));
        this->SetAlignItemsHor((e3::EAlignment)0);
    mBG = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG);
        mBG->SetWidth("100%");
        mBG->SetHeight("60%");
        mBG->SetBorderRadius(0.5);
        mBG->SetBackgroundColor(glm::vec4(120, 120, 120, 255));
        mBG->SetPositionType((e3::EPositionType)1);
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetHeight("100%");
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderRadius(0.5);
        mCircle->SetBackgroundColor(glm::vec4(120, 120, 120, 255));
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCircle->AddElement(mHover);
        mHover->SetWidth("38dp");
        mHover->SetBorderRadius(0.5);
        mHover->SetHeight("38dp");
        mHover->SetOpacity(0.000000);
        mHover->SetBackgroundColor(glm::vec4(98, 0, 238, 0.04 * 255));
        mHover->SetPositionType((e3::EPositionType)1);

}
