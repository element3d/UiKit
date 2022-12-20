#include "UiDialogBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDialogBase::UiDialogBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("400dp");
        this->SetHeight("300dp");
        this->SetStopEvents(true);
        this->SetPositionType((e3::EPositionType)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetBorderRadius(8);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(50, 50, 50, 255);
        ShadowParams.BlurSize = 30;
        ShadowParams.Opacity = 1;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 10);
        SetShadow(ShadowParams);

}
