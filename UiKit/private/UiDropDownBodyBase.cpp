#include "UiDropDownBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownBodyBase::UiDropDownBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBorderRadius(10);
        this->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 255);
        ShadowParams.BlurSize = 4;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 4);
        SetShadow(ShadowParams);

}
