#include "UiSwitchBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiSwitchBase::UiSwitchBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("50dp");
        this->SetHeight("22dp");
        this->SetPadding("4dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(0.5);
        this->SetBorderColor(glm::vec4(0, 0, 0, 200));
        this->SetAlignItemsHor((e3::EAlignment)0);
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetHeight("100%");
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderRadius(0.5);
        mCircle->SetBackgroundColor(glm::vec4(0, 0, 0, 255));

}
