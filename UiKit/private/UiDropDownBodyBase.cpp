#include "UiDropDownBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownBodyBase::UiDropDownBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetPaddingLeft("4dp");
        this->SetPaddingRight("4dp");
        this->SetBorderRadius(7);
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetBackgroundColor(glm::vec4(252, 252, 252, 0.85 * 255));
        this->SetFilterBlur(30);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(150, 150, 150, 255);
        ShadowParams.BlurSize = 8;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 2);
        SetShadow(ShadowParams);

}
