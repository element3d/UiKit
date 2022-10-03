
#ifndef UiComboBoxItem_H_
#define UiComboBoxItem_H_

#include "private/UiComboBoxItemBase.h"

class E3_EXPORT UiComboBoxItem : public UiComboBoxItemBase
{
public:
	UiComboBoxItem(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	std::string GetTitle();
};

#endif // UiComboBoxItem_H_

