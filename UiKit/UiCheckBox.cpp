#include "UiCheckBox.h"
#include "UiKit.h"

UiCheckBox::UiCheckBox(e3::Element* pParent)
	: UiCheckBoxBase(pParent)
{
	UiKitOS os = UiKit::GetOS();

	switch (os)
	{
	case UiKitOS::MacOS:
		_SetMacOSStyles();
	default:
		break;
	}

	mCheck->SetRotation(-45, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
}

void UiCheckBox::_SetMacOSStyles()
{
	SetBackgroundColor(UiColor::White);
	SetBorderColor(glm::vec4(0, 0, 0, 0.18 * 255));
}

bool UiCheckBox::OnClick(e3::MouseEvent* pEvent)
{
	UiCheckBoxBase::OnClick(pEvent);

	// mCircle->SetWidth(GetGeometry().width * 0.5);
	mChecked = !mChecked;
	if (mChecked)
	{
		SetBackgroundColor(UiColor::Primary);
		mCheck->SetVisibility(e3::EVisibility::Visible);
	}
	else
	{
		SetBackgroundColor(glm::vec4(0));
		mCheck->SetVisibility(e3::EVisibility::Gone);
	}

	return true;
}