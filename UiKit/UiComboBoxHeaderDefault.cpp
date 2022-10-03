#include "UiComboBoxHeaderDefault.h"

UiComboBoxHeaderDefault::UiComboBoxHeaderDefault(e3::Element* pParent)
	: UiComboBoxHeaderDefaultBase(pParent)
{

}

void UiComboBoxHeaderDefault::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}