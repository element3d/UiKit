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

bool UiButton::OnMouseDown(e3::MouseEvent* pE) 
{
	SetOpacity(.95);
	return UiButtonBase::OnMouseDown(pE);
}

bool UiButton::OnMouseUp(e3::MouseEvent* pE)
{
	SetOpacity(1);
	return UiButtonBase::OnMouseUp(pE);
}

void UiButton::OnMouseEnter(e3::MouseEvent* pE)
{
	UiButtonBase::OnMouseEnter(pE);
	SetBackgroundColor(glm::vec4(245, 245, 245, 255));
}

void UiButton::OnMouseLeave(e3::MouseEvent* pE)
{
	UiButtonBase::OnMouseLeave(pE);
	SetBackgroundColor(glm::vec4(250, 250, 250, 255));
}