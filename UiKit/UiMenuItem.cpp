#include "UiMenuItem.h"

UiMenuItem::UiMenuItem(e3::Element* pParent)
	: UiMenuItemBase(pParent)
{

}

void UiMenuItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}