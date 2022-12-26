#include "UiRadioButton.h"
#include "UiKit.h"

std::map<std::string, std::vector<UiRadioButton*>> UiRadioButton::sRadioGroups;

UiRadioButton::UiRadioButton(e3::Element* pParent)
	: UiRadioButtonBase(pParent)
{
	EUiKitDesign os = UiKit::GetDesign();

	switch (os)
	{
	case EUiKitDesign::Apple:
		_SetMacOSStyles();
		break;
	case EUiKitDesign::Material:
	  SetWidth("18dp");
	  SetHeight("18dp");
	  SetBorderSize(e3::Dim("2dp"));
	  mCircle->SetBackgroundColor(UiColor::Primary);
	  break;
	default:
		break;
	}
}

void UiRadioButton::_SetMacOSStyles()
{
	//SetBorderSize(0);
  SetWidth("18dp");
  SetHeight("18dp");
  SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
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
	
	float scale = 0.55;
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	  SetBorderSize(0);
	  break;
	case EUiKitDesign::Material:
	{
		SetBorderColor(UiColor::Primary);
		scale = 0.2;
		break;
	}
	default:
	  SetBackgroundColor(UiColor::Primary);
	  SetBorderSize(0);
	  break;
	}

	// mCircle->SetWidth(GetGeometry().width * scale);
}

void UiRadioButton::UnCheck()
{
	mChecked = false;
	mCircle->SetWidth(0);
	

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetBackgroundColor(glm::vec4(255));
	  SetBorderSize("1dp");
	  break;
	case EUiKitDesign::Material:
	  SetBorderColor(glm::vec4(138, 138, 138, 255));
	  SetBackgroundColor(glm::vec4(0));
	  break;
	default:
	  SetBackgroundColor(glm::vec4(0));
	  SetBorderSize("1dp");
	  break;
	}
}

void UiRadioButton::OnMouseEnter(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseEnter(pEvent);
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  break;
	case EUiKitDesign::Material:
	  mHover->SetOpacity(1);
	  break;
	default:
	  if (!mChecked) SetBackgroundColor(glm::vec4(235, 235, 235, 255));
	  break;
	}
}

void UiRadioButton::OnMouseLeave(e3::MouseEvent* pEvent) 
{
	UiRadioButtonBase::OnMouseLeave(pEvent);

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  return;
	case EUiKitDesign::Material:
	  mHover->SetOpacity(0);
	  return;
	}
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
