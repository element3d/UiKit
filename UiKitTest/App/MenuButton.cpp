#include "MenuButton.h"
#include "UiKit.h"

MenuButton::MenuButton(e3::Element* pParent)
	: MenuButtonBase(pParent)
{
	auto des = UiKit::GetDesign();
	switch (des)
	{
	case EUiKitDesign::Windows:
		break;
	case EUiKitDesign::Apple:
		break;
	case EUiKitDesign::Material:
		SetBackgroundColor(glm::vec4(255));
		break;
	default:
		break;
	}
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