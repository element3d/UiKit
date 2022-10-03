
#ifndef UiComboBox_H_
#define UiComboBox_H_

#include "private/UiComboBoxBase.h"
#include "UiComboBoxHeader.h"
#include "UiComboBoxBody.h"

class E3_EXPORT UiComboBox : public UiComboBoxBase
{
	typedef std::function<void(int index, UiComboBoxItem* pItem)> OnChangeCallback;
public:
	UiComboBox(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }

	void AddElement(UiComboBoxHeader* pHeader);
	void AddElement(UiComboBoxBody* pBody);

private:
	UiComboBoxHeader* mComboHeader = nullptr;
	UiComboBoxBody* mBody = nullptr;
	OnChangeCallback mOnChangeCallback;
};

#endif // UiComboBox_H_

