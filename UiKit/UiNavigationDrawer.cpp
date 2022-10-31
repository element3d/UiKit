#include "UiNavigationDrawer.h"

UiNavigationDrawer::UiNavigationDrawer(e3::Element* pParent)
	: UiNavigationDrawerBase(pParent)
{

}

void UiNavigationDrawer::Toggle()
{
	if (mExpanded) 
	{
		e3::Dim w("50dp");
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.1, GetGeometry().width, w, e3::EAnimation::EaseInOutQuad, [this](float v){
			SetWidth(v);
		}, [this](){
			SignalOnToggle(!mExpanded);
		});
	}
	else 
	{
		e3::Dim w("300dp");
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.1, GetGeometry().width, w, e3::EAnimation::EaseInOutQuad, [this](float v){
			SetWidth(v);
		}, [this](){
			SignalOnToggle(!mExpanded);
		});
	}
	mExpanded = !mExpanded;
}

void UiNavigationDrawer::AddElement(UiNavigationDrawerItem* pItem)
{
	pItem->SetNavigationDrawer(this);
	UiNavigationDrawerBase::AddElement(pItem);
}

void UiNavigationDrawer::InsertElement(int index, UiNavigationDrawerItem* pItem)
{
	pItem->SetNavigationDrawer(this);
	UiNavigationDrawerBase::InsertElement(index, pItem);
}

bool UiNavigationDrawer::IsMinimized()
{
	return !mExpanded;
}
