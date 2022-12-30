#include "UiTreeViewItemHeaderDefault.h"
#include "UiKit.h"

UiTreeViewItemHeaderDefault::UiTreeViewItemHeaderDefault(e3::Element* pParent)
	: UiTreeViewItemHeaderDefaultBase(pParent)
{
	mIcon->SetVisibility(e3::EVisibility::Gone);
	mIcon->SetRotation(-90, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetHeight("24dp");
	  SetBorderRadius(e3::Dim("6dp"));
	  break;
	case EUiKitDesign::Material:
		SetBorderRadius(0);
		SetHeight("36dp");
		RemoveElement(mSelection);
		mSelection = nullptr;
		break;
	default:
	  break;
	}
}

void UiTreeViewItemHeaderDefault::Select()
{
  UiTreeViewItemHeaderDefaultBase::Select();
  EUiKitDesign os = UiKit::GetDesign();
  if (os == EUiKitDesign::Apple)
	mText->SetTextColor(glm::vec4(255));
}

void UiTreeViewItemHeaderDefault::Unselect()
{
  UiTreeViewItemHeaderDefaultBase::Unselect();
  EUiKitDesign os = UiKit::GetDesign();
  if (os == EUiKitDesign::Apple)
	mText->SetTextColor(glm::vec4(60, 60, 60, 255));
}

void UiTreeViewItemHeaderDefault::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}

void UiTreeViewItemHeaderDefault::OnMouseEnter(e3::MouseEvent* pE)
{
  UiTreeViewItemHeaderDefaultBase::OnMouseEnter(pE);
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
//	mText->SetTextColor(glm::vec4(255));
	break;
  default:
	break;
  }
}

void UiTreeViewItemHeaderDefault::OnMouseLeave(e3::MouseEvent* pE)
{
  UiTreeViewItemHeaderDefaultBase::OnMouseLeave(pE);
 // mText->SetTextColor(glm::vec4(60, 60, 60, 255));
  // mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}
