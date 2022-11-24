#include "UiTab.h"
#include "UiTabViewPage.h"

UiTab::UiTab(e3::Element* pParent)
	: UiTabBase(pParent)
{
	UnSelect();

	mClose->SignalOnClick.Connect([this](e3::MouseEvent* pE){
		pE->Stop();
		 SignalOnClose();
	});
}

void UiTab::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
	// if (mPage) mPage->SetTitle(title);
}

void UiTab::Select()
{
	mSelected = true;
	SetBackgroundColor(glm::vec4(255, 255, 255, 255));
}

void UiTab::UnSelect()
{
	mSelected = false;
	SetBorderColor(glm::vec4(0));
	SetBackgroundColor(glm::vec4(0));
}

void UiTab::OnMouseEnter(e3::MouseEvent* pE)
{
	UiTabBase::OnMouseEnter(pE);
	if (!mSelected) SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
}

void UiTab::OnMouseLeave(e3::MouseEvent* pE)
{
	UiTabBase::OnMouseLeave(pE);
	if (!mSelected) SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}