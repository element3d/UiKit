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
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(0, 0, 0, 255);
        ShadowParams.BlurSize = 1;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 1);
        SetShadow(ShadowParams);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);
        mHover->SetPositionType((e3::EPositionType)1);
    mRipple = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRipple);
        mRipple->SetWidth("150%");
        mRipple->SetAspectRatio(1.000000);
        mRipple->SetPositionType((e3::EPositionType)1);
        mRipple->SetOpacity(0.000000);
        mRipple->SetBorderRadius(0.5);
        mRipple->SetBackgroundColor(glm::vec4(255, 255, 255, 0.36 * 255));

}
