#include "UiExpanderHeaderDefault.h"

UiExpanderHeaderDefault::UiExpanderHeaderDefault(e3::Element* pParent)
	: UiExpanderHeaderDefaultBase(pParent)
{

}

void UiExpanderHeaderDefault::SetTitle(const std::string& title)
{
	mText->SetText(title);
}

void UiExpanderHeaderDefault::OnChange(bool expanded)
{
	if (expanded) mIcon->SetRotation(180, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
	else mIcon->SetRotation(0, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
}