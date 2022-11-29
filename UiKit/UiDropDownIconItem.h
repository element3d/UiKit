
#ifndef UiDropDownIconItem_H_
#define UiDropDownIconItem_H_

#include "private/UiDropDownIconItemBase.h"

class E3_EXPORT UiDropDownIconItem : public UiDropDownIconItemBase
{
public:
	UiDropDownIconItem(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& charcode);
	void SetText(const std::string& text, bool translate = false);
};

#endif // UiDropDownIconItem_H_

