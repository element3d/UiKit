
#ifndef UiDropDownItem_H_
#define UiDropDownItem_H_

#include "private/UiDropDownItemBase.h"

class E3_EXPORT UiDropDownItem : public UiDropDownItemBase
{
public:
	UiDropDownItem(e3::Element* pParent = nullptr);

	void SetText(const std::string& text, bool translate = false);

	void OnMouseLeave(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
};

#endif // UiDropDownItem_H_

