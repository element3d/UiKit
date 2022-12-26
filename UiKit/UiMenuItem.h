
#ifndef UiMenuItem_H_
#define UiMenuItem_H_

#include "private/UiMenuItemBase.h"

class E3_EXPORT UiMenuItem : public UiMenuItemBase
{
public:
	UiMenuItem(e3::Element* pParent = nullptr);

	void SetText(const std::string& text, bool translate = false);

	void OnMouseLeave(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
};

#endif // UiMenuItem_H_

