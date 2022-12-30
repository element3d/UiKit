#include "UiRadioButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiRadioButtonBase::UiRadioButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("18dp");
        this->SetHeight("18dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(0.5);
        this->SetBackgroundColor(glm::vec4(244, 244, 244, 255));
        this->SetBorderColor(glm::vec4(138, 138, 138, 255));
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetWidth("36dp");
        mHover->SetBorderRadius(0.5);
        mHover->SetHeight("36dp");
        mHover->SetOpacity(0.000000);
        mHover->SetBackgroundColor(glm::vec4(98, 0, 238, 0.04 * 255));
        mHover->SetPositionType((e3::EPositionType)1);
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderRadius(0.5);
        mCircle->SetBackgroundColor(glm::vec4(255));

}
