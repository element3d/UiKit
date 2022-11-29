#include "UiDropDownIconItem.h"

UiDropDownIconItem::UiDropDownIconItem(e3::Element* pParent)
	: UiDropDownIconItemBase(pParent)
{

}

void UiDropDownIconItem::SetIcon(const std::string& charcode)
{
	mIcon->SetCharcode(charcode);
}

void UiDropDownIconItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}