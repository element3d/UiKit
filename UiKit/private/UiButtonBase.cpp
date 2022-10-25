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
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 255);
        ShadowParams.BlurSize = 1;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 1);
        SetShadow(ShadowParams);

}
