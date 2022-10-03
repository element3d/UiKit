#include "UiExpander.h"

UiExpander::UiExpander(e3::Element* pParent)
	: UiExpanderBase(pParent)
{
	mBody->SetVisibility(e3::EVisibility::Hidden);
	
}

void UiExpander::AddElement(UiExpanderBody* pBody)
{
	mBody->AddElement(pBody);
}

void UiExpander::AddElement(UiExpanderHeader* pHeader)
{
	mHeader->AddElement(pHeader);
	mExpanderHeader = pHeader;
	mExpanderHeader->SetOnChangeCallback([this](bool expanded) {
		mExpanded = expanded;
		if (mExpanded)
		{
			mBody->SetVisibility(e3::EVisibility::Visible);
		//	mIcon->SetRotation(180, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
		}
		else
			mBody->SetVisibility(e3::EVisibility::Hidden);
		//	mIcon->SetRotation(0, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
		
	});
}