#include "UiButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiButtonBase::UiButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(100, 100, 100, 255));
        this->SetBorderRadius(4);
        this->SetPadding("14dp");
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(0, 0, 0, 255);
        ShadowParams.BlurSize = 1;
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 1);
        SetShadow(ShadowParams);
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        AddElement(pText1);
        pText1->SetText("Standard XAML Button");
        pText1->SetFontSize("14dp");

}
