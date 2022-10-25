#include "MenuButton.h"

MenuButton::MenuButton(e3::Element* pParent)
	: MenuButtonBase(pParent)
{

}

void MenuButton::SetTitle(const std::string& title)
{
	mTitle->SetText(title);
}

void MenuButton::SetDesc(const std::string& desc)
{
	mDesc->SetText(desc);
}

void MenuButton::SetImage(const std::string& image)
{
	mImage->SetBackgroundImage(image);
}