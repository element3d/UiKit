#include "UiCheckBoxBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiCheckBoxBase::UiCheckBoxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("20dp");
        this->SetHeight("20dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetWidth("36dp");
        mHover->SetBorderRadius(0.5);
        mHover->SetHeight("36dp");
        mHover->SetOpacity(0.000000);
        mHover->SetBackgroundColor(glm::vec4(98, 0, 238, 0.04 * 255));
        mHover->SetPositionType((e3::EPositionType)1);
    mBG = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG);
        mBG->SetWidth("20dp");
        mBG->SetHeight("20dp");
        mBG->SetBorderSize("1dp");
        mBG->SetBorderRadius(4);
        mBG->SetBorderColor(glm::vec4(150, 150, 150, 255));
        mBG->SetPositionType((e3::EPositionType)1);
        mCheck = new UiIcon();
        AddElement(mCheck);
        mCheck->SetVisibility((e3::EVisibility)1);
        mCheck->SetWidth("60%");
        mCheck->SetColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mCheck->SetAspectRatio(1.000000);
        mCheck->SetCharcode(59198);

}
