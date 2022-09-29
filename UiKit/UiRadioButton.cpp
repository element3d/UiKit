#include "UiRadioButton.h"
#include "UiKit.h"

UiRadioButton::UiRadioButton(e3::Element* pParent)
	: UiRadioButtonBase(pParent)
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

void UiRadioButton::_SetMacOSStyles()
{
	SetBorderSize(0);
	SetBackgroundColor(UiColor::White);
}

bool UiRadioButton::OnClick(e3::MouseEvent* pEvent)
{
	UiRadioButtonBase::OnClick(pEvent);

	mCircle->SetWidth(GetGeometry().width * 0.5);
	SetBackgroundColor(UiColor::Primary);

	return true;
}