#include "UiSwitch.h"
#include "UiKit.h"

UiSwitch::UiSwitch(e3::Element* pParent)
	: UiSwitchBase(pParent)
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

void UiSwitch::_SetMacOSStyles()
{
	SetHeight("22dp");
	SetWidth("40dp");
	SetPadding("2dp");
	SetBorderSize(0);
	mCircle->SetBackgroundColor(UiColor::White);
	SetBackgroundColor(glm::vec4(60, 60, 67, 0.18 * 255));
}

bool UiSwitch::OnClick(e3::MouseEvent* pEvent)
{
	UiSwitchBase::OnClick(pEvent);

	auto geo = GetGeometry();
	float dx = geo.width - mCircle->GetGeometry().width - 2 * GetBorderSize() - GetPaddingLeft() - GetPaddingRight();
	mCircle->SetTranslation(glm::vec3(dx, 0, 0));
	SetBackgroundColor(UiColor::Primary);
	mCircle->SetBackgroundColor(UiColor::White);
	return true;
}
