#include "UiButton.h"
#include "UiKit.h"

UiButton::UiButton(e3::Element* pParent)
	: UiButtonBase(pParent)
{
	UiKitOS os = UiKit::GetOS();

	switch (os)
	{
	case UiKitOS::MacOS:
		_SetMacOSStyles();
	default:
		break;
	}
}

void UiButton::_SetMacOSStyles()
{
	SetBorderColor(glm::vec4(0, 0, 0, 0.2 * 255));
	SetBorderRadius(e3::Dim("6dp"));
	e3::ShadowParams sh;
	sh.BlurSize = 0;
	SetShadow(sh);
}
