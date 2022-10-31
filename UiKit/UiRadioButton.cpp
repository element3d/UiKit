#include "UiRadioButton.h"
#include "UiKit.h"

std::map<std::string, std::vector<UiRadioButton*>> UiRadioButton::sRadioGroups;

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

void UiRadioButton::SetGroup(const std::string& group)
{
	mGroup = group;
	if (mGroup.size())
	{
		sRadioGroups[mGroup].push_back(this);
	}
}

std::string UiRadioButton::GetGroup()
{
	return mGroup;
}

void UiRadioButton::Check()
{
	mCircle->SetWidth(GetGeometry().width * 0.55);
	SetBorderSize(0);
	SetBackgroundColor(UiColor::Primary);
}

void UiRadioButton::UnCheck()
{
	mCircle->SetWidth(0);
	SetBorderSize("1dp");
	SetBackgroundColor(glm::vec4(0));
}

bool UiRadioButton::OnClick(e3::MouseEvent* pEvent)
{
	UiRadioButtonBase::OnClick(pEvent);

	Check();

	auto it = sRadioGroups.find(mGroup);
	if (it != sRadioGroups.end())
	{
		for (auto pR : it->second)
		{
			if (pR != this) pR->UnCheck();
		}
	}

	return true;
}