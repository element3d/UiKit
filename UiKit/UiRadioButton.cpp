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
	mChecked = true;
	mCircle->SetWidth(GetGeometry().width * 0.55);
	SetBorderSize(0);
	SetBackgroundColor(UiColor::Primary);
}

void UiRadioButton::UnCheck()
{
	mChecked = false;
	mCircle->SetWidth(0);
	SetBorderSize("1dp");
	SetBackgroundColor(glm::vec4(0));
}

void UiRadioButton::OnMouseEnter(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseEnter(pEvent);
	if (!mChecked) SetBackgroundColor(glm::vec4(235, 235, 235, 255));
}

void UiRadioButton::OnMouseLeave(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseLeave(pEvent);
	if (!mChecked) 
	{
		SetBackgroundColor(glm::vec4(244, 244, 244, 255));
		if (!mAnimation) mAnimation = new e3::Animation();
		mAnimation->Start(0.1, mCircle->GetGeometry().width, 0, [this](float v){
			mCircle->SetWidth(v);
		}, [this](){
			mAnimation = nullptr;
		});
	}
}

bool UiRadioButton::OnMouseDown(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseDown(pEvent);
	if (!mAnimation) mAnimation = new e3::Animation();
	mAnimation->Start(0.1, mCircle->GetGeometry().width, GetGeometry().width * 0.55, [this](float v){
		mCircle->SetWidth(v);
		}, [this](){
			mAnimation = nullptr;
		});

	return true;
}

bool UiRadioButton::OnMouseUp(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseUp(pEvent);



	return true;
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