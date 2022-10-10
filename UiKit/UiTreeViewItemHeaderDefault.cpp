#include "UiTreeViewItemHeaderDefault.h"

UiTreeViewItemHeaderDefault::UiTreeViewItemHeaderDefault(e3::Element* pParent)
	: UiTreeViewItemHeaderDefaultBase(pParent)
{
	mIcon->SetVisibility(e3::EVisibility::Gone);
	mIcon->SetRotation(-90, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
}

void UiTreeViewItemHeaderDefault::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}

void UiTreeViewItemHeaderDefault::OnChange(bool expanded)
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

void UiTreeViewItemHeaderDefault::OnItemChildAdded() 
{
	mIcon->SetVisibility(e3::EVisibility::Visible);
}

bool UiTreeViewItemHeaderDefault::OnClick(e3::MouseEvent* pE)
{
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
	return UiTreeViewItemHeaderDefaultBase::OnClick(pE);
}

void UiTreeViewItemHeaderDefault::Select()
{
	mSelection->SetVisibility(e3::EVisibility::Visible);
	SetBackgroundColor(glm::vec4(0, 0, 0, 15));
}

void UiTreeViewItemHeaderDefault::Unselect()
{
	mSelection->SetVisibility(e3::EVisibility::Gone);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}