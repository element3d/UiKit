#include "UiMenu.h"

UiMenu::UiMenu(e3::Element* pParent)
	: UiMenuBase(pParent)
{

}

void UiMenu::AddElement(UiMenuItem* pItem)
{
	mItems.push_back(pItem);
}

std::vector<UiMenuItem*> UiMenu::GetItems()
{
	return mItems;
}