#include "UiCheckBox.h"
#include "UiKit.h"

std::map<std::string, std::vector<UiCheckBox*>> UiCheckBox::sCheckBoxGroups;

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

	// mCheck->SetRotation(-45, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
}

void UiCheckBox::SetIsThreeState(bool isThreeState)
{
	mIsThreeState = isThreeState;
}

bool UiCheckBox::GetIsThreeState()
{
	return mIsThreeState;
}

void UiCheckBox::SetGroup(const std::string& group)
{
	mGroup = group;
	if (mGroup.size())
	{
		sCheckBoxGroups[mGroup].push_back(this);
	}
}

std::string UiCheckBox::GetGroup()
{
	return mGroup;
}

void UiCheckBox::_SetMacOSStyles()
{
	SetBackgroundColor(UiColor::White);
	SetBorderColor(glm::vec4(0, 0, 0, 0.18 * 255));
}

void UiCheckBox::Check()
{
	SetBackgroundColor(UiColor::Primary);
	mCheck->SetVisibility(e3::EVisibility::Visible);
	SetBorderSize(0);
	mCheck->SetCharcode("E73E");
	mState = EUiCheckBoxState::Checked;
}

void UiCheckBox::SemiCheck() 
{
	SetBackgroundColor(UiColor::Primary);
	mCheck->SetVisibility(e3::EVisibility::Visible);
	SetBorderSize(0);
	mCheck->SetCharcode("E738");
	mState = EUiCheckBoxState::SemiChecked;
}

void UiCheckBox::UnCheck()
{
	SetBackgroundColor(glm::vec4(0));
	mCheck->SetVisibility(e3::EVisibility::Gone);
	SetBorderSize("1dp");
	mState = EUiCheckBoxState::UnChecked;
}

bool UiCheckBox::OnClick(e3::MouseEvent* pEvent)
{
	UiCheckBoxBase::OnClick(pEvent);

	// mCircle->SetWidth(GetGeometry().width * 0.5);
	if (mState == EUiCheckBoxState::UnChecked)
		mState = EUiCheckBoxState::Checked;
	else if (mState == EUiCheckBoxState::Checked)
		mState = EUiCheckBoxState::UnChecked;

	auto it = sCheckBoxGroups.find(mGroup);
	if (mState == EUiCheckBoxState::Checked)
	{
		if (it != sCheckBoxGroups.end() && GetIsThreeState()) 
		{
			for (auto pR : it->second)
			{
				if (!pR->GetIsThreeState()) pR->Check();
			}
		}
		Check();
	}
	else
	{
		if (it != sCheckBoxGroups.end() && GetIsThreeState()) 
		{
			for (auto pR : it->second)
			{
				if (!pR->GetIsThreeState()) pR->UnCheck();
			}
		}
		UnCheck();
	}

	if (GetIsThreeState()) return true;
	std::vector<UiCheckBox*> tsChecks;
	int checkCount = 0;
	
	if (it != sCheckBoxGroups.end())
	{
		for (auto pR : it->second)
		{
			if (pR->GetIsThreeState()) tsChecks.push_back(pR);
			else if (pR->GetState() == EUiCheckBoxState::Checked) ++checkCount;
		}
	}

	if (!tsChecks.size()) return true;

	if (checkCount == 0) tsChecks[0]->UnCheck();
	else if (checkCount == it->second.size() - tsChecks.size()) tsChecks[0]->Check();
	else tsChecks[0]->SemiCheck();

	return true;
}