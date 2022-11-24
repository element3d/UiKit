#include "UiDropDownItem.h"

UiDropDownItem::UiDropDownItem(e3::Element* pParent)
	: UiDropDownItemBase(pParent)
{

}

void UiDropDownItem::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}