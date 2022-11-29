#include "UiDropDownBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownBodyBase::UiDropDownBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetPaddingLeft("4dp");
        this->SetPaddingRight("4dp");
        this->SetBorderRadius(8);
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 255);
        ShadowParams.BlurSize = 8;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 4);
        SetShadow(ShadowParams);

}
