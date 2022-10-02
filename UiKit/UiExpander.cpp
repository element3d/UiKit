#include "UiExpander.h"

UiExpander::UiExpander(e3::Element* pParent)
	: UiExpanderBase(pParent)
{
	mBody->SetVisibility(e3::EVisibility::Hidden);
	mHeader->SetOnClickCallback([this](e3::MouseEvent*) {
		mExpanded = !mExpanded;
		if (mExpanded)
			mBody->SetVisibility(e3::EVisibility::Visible);
		else
			mBody->SetVisibility(e3::EVisibility::Hidden);
	});
}

void UiExpander::AddElement(UiExpanderBody* pBody)
{
	mBody->AddElement(pBody);
}