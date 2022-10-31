#include "UiComboBoxBody.h"

UiComboBoxBody::UiComboBoxBody(e3::Element* pParent)
	: UiComboBoxBodyBase(pParent)
{

}

void UiComboBoxBody::AddElement(UiComboBoxItem* pItem)
{
	if (!mSelectedItem) 
	{
		mSelectedItem = pItem;
		mSelectedItem->Select();
	}
	UiComboBoxBodyBase::AddElement(pItem);
	int index = GetNumChildren() - 1;
	pItem->SignalOnClick.Connect([this, index, pItem](e3::MouseEvent*) {
		if (mSelectedItem) mSelectedItem->Unselect();
		mSelectedItem = pItem;
		if (mOnChangeCallback) mOnChangeCallback(index, pItem);
	});
	/*pItem->SetOnClickCallback([this, index, pItem](e3::MouseEvent*) {
		if (mSelectedItem) mSelectedItem->Unselect();
		mSelectedItem = pItem;
		if (mOnChangeCallback) mOnChangeCallback(index, pItem);
	});*/
}