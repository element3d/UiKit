#include "UiComboBoxBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxBodyBase::UiComboBoxBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(252, 252, 252, 0.85 * 255));
        this->SetBorderRadius(7);
        this->SetPadding("4dp");
        this->SetBorderSize("1dp");
        this->SetFilterBlur(100);
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 255);
        ShadowParams.BlurSize = 15;
        ShadowParams.Opacity = 1;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 5);
        SetShadow(ShadowParams);

}
