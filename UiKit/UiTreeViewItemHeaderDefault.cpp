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