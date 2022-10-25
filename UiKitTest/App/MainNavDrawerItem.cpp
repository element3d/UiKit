#include "MainNavDrawerItem.h"

MainNavDrawerItem::MainNavDrawerItem(e3::Element* pParent)
	: MainNavDrawerItemBase(pParent)
{

}


void MainNavDrawerItem::SetIcon(const std::string charcode)
{
	mIcon->SetCharcode(charcode);
}

void MainNavDrawerItem::SetTitle(const std::string title)
{
	mTitle->SetText(title);
}