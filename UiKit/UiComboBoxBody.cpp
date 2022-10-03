#include "UiComboBoxBody.h"

UiComboBoxBody::UiComboBoxBody(e3::Element* pParent)
	: UiComboBoxBodyBase(pParent)
{

}

void UiComboBoxBody::AddElement(UiComboBoxItem* pItem)
{
	UiComboBoxBodyBase::AddElement(pItem);
	int index = GetNumChildren() - 1;
	pItem->SetOnClickCallback([this, index, pItem](e3::MouseEvent*) {
		if (mOnChangeCallback) mOnChangeCallback(index, pItem);
	});
}