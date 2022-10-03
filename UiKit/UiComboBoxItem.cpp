#include "UiComboBoxItem.h"

UiComboBoxItem::UiComboBoxItem(e3::Element* pParent)
	: UiComboBoxItemBase(pParent)
{

}

void UiComboBoxItem::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}