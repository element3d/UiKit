#include "UiRadioButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiRadioButtonBase::UiRadioButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("24dp");
        this->SetHeight("24dp");
        this->SetBorderSize("1dp");
        this->SetBorderRadius(0.5);
        this->SetBorderColor(glm::vec4(0, 0, 0, 255));
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderRadius(0.5);
        mCircle->SetBackgroundColor(glm::vec4(255));

}
