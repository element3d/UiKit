
#ifndef UiComboBoxBody_H_
#define UiComboBoxBody_H_

#include "private/UiComboBoxBodyBase.h"
#include "UiComboBoxItem.h"

class E3_EXPORT UiComboBoxBody : public UiComboBoxBodyBase
{
	typedef std::function<void(int index, UiComboBoxItem* pItem)> OnChangeCallback;
public:
	UiComboBoxBody(e3::Element* pParent = nullptr);

	void AddElement(UiComboBoxItem* pItem);
	UiComboBoxItem* GetSelectedItem() { return mSelectedItem; }

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }
private:
	OnChangeCallback mOnChangeCallback;
	UiComboBoxItem* mSelectedItem = nullptr;
};

#endif // UiComboBoxBody_H_

