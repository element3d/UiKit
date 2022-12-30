#include "UiTreeViewItemHeaderMini.h"
#include "UiKit.h"

UiTreeViewItemHeaderMini::UiTreeViewItemHeaderMini(e3::Element* pParent)
	: UiTreeViewItemHeaderMiniBase(pParent)
{
	mContainer->SetMarginLeft(0);
	mIcon->SetVisibility(e3::EVisibility::Gone);

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  SetHeight("24dp");
	  SetBorderRadius(e3::Dim("6dp"));
	  RemoveElement(mSelection);
	  mSelection = nullptr;
	  break;
	case EUiKitDesign::Material:
		SetHeight("36dp");
		SetBorderRadius(0);
		RemoveElement(mSelection);
		mSelection = nullptr;
		break;
	default:
	  break;
	}
}

void UiTreeViewItemHeaderMini::SetIndicatorPosition(int ePosition)
{
	if (mIndicatorPosition == ePosition) return;
	mIndicatorPosition = ePosition;

	if (mIndicatorPosition == UiRight)
	{
		RemoveElement(mIcon, false);
		e3::Element::AddElement(mIcon);
		mContainer->SetMarginLeft("14dp");
	}
	else 
	{
		RemoveElement(mIcon, false);
		e3::Element::InsertElement(1, mIcon);
		mContainer->SetMarginLeft(0);
	}
}

void UiTreeViewItemHeaderMini::OnChange(bool expanded)
{
		if (expanded)
		{
			mIcon->SetRotation(0, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
		}
		else
		{
			mIcon->SetRotation(-90, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
		}
}

void UiTreeViewItemHeaderMini::OnItemChildAdded() 
{
	mIcon->SetVisibility(e3::EVisibility::Visible);
}

void UiTreeViewItemHeaderMini::AddElement(e3::Element* pElement)
{
	mContainer->AddElement(pElement);
}

bool UiTreeViewItemHeaderMini::OnClick(e3::MouseEvent* pE)
{
	//mSelection->SetVisibility(e3::EVisibility::Visible);
  Select();
  return UiTreeViewItemHeaderMiniBase::OnClick(pE);
}

void UiTreeViewItemHeaderMini::Select()
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	mIcon->SetColor(glm::vec4(255));
	SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	break;
  default:
	if (mSelection) mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	break;
  }

}

void UiTreeViewItemHeaderMini::Unselect()
{
	if (mSelection) mSelection->SetVisibility(e3::EVisibility::Gone);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));

	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	  mIcon->SetColor(glm::vec4(50, 50, 50, 255));
	  break;
	default:
	  break;
	}
	
}

void UiTreeViewItemHeaderMini::OnMouseEnter(e3::MouseEvent* pE)
{
  UiTreeViewItemHeaderMiniBase::OnMouseEnter(pE);
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	//mIcon->SetColor(glm::vec4(255));
	break;
  default:
	break;
  }
}

void UiTreeViewItemHeaderMini::OnMouseLeave(e3::MouseEvent* pE)
{
  UiTreeViewItemHeaderMiniBase::OnMouseLeave(pE);
  // mIcon->SetColor(glm::vec4(50, 50, 50, 255));
  // mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}
