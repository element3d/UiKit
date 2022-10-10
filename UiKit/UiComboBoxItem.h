
#ifndef UiComboBoxItem_H_
#define UiComboBoxItem_H_

#include "private/UiComboBoxItemBase.h"

class E3_EXPORT UiComboBoxItem : public UiComboBoxItemBase
{
public:
	UiComboBoxItem(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	std::string GetTitle();

	void Select();
	void Unselect();

protected:
	bool OnClick(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);
};

#endif // UiComboBoxItem_H_

