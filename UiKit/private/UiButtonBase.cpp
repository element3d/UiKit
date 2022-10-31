#include "UiButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiButtonBase::UiButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBorderRadius(4);
        this->SetBorderSize("1dp");
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetPadding("14dp");
        this->SetOverflow((e3::EOverflow)0);
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);
        mHover->SetPositionType((e3::EPositionType)1);

}
