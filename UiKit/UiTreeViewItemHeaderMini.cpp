#include "UiTreeViewItemHeaderMini.h"

UiTreeViewItemHeaderMini::UiTreeViewItemHeaderMini(e3::Element* pParent)
	: UiTreeViewItemHeaderMiniBase(pParent)
{
	mContainer->SetMarginLeft(0);
	mIcon->SetVisibility(e3::EVisibility::Gone);

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
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
	return UiTreeViewItemHeaderMiniBase::OnClick(pE);
}

void UiTreeViewItemHeaderMini::Select()
{
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
}

void UiTreeViewItemHeaderMini::Unselect()
{
	mSelection->SetVisibility(e3::EVisibility::Gone);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}