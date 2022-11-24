#include "UiTabViewPage.h"
#include "UiTab.h"

UiTabViewPage::UiTabViewPage(e3::Element* pParent)
	: UiTabViewPageBase(pParent)
{

}

void UiTabViewPage::SetTitle(const std::string& title) 
{
	mTitle = title; 
	if (mTab) mTab->SetTitle(title);
}

std::string UiTabViewPage::GetTitle() 
{
	return mTitle; 
}