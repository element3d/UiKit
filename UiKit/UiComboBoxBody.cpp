#include "UiComboBoxBody.h"
#include "UiKit.h"

UiComboBoxBody::UiComboBoxBody(e3::Element* pParent)
	: UiComboBoxBodyBase(pParent)
{
  auto design = UiKit::GetDesign();

  switch (design)
  {
  case EUiKitDesign::Windows:
	break;
  case EUiKitDesign::Apple:
	break;
  case EUiKitDesign::Material:
	SetBorderRadius(0);
	SetPadding(0);
	SetBorderSize(0);
	SetBackgroundColor(glm::vec4(255));
	break;
  default:
	break;
  }
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