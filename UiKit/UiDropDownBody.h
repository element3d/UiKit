
#ifndef UiDropDownBody_H_
#define UiDropDownBody_H_

#include "private/UiDropDownBodyBase.h"
#include "UiDropDownItem.h"
#include "UiDropDownIconItem.h"

class E3_EXPORT UiDropDownBody : public UiDropDownBodyBase
{
public:
	void Expand();
	void Collapse();

	UiDropDownBody(e3::Element* pParent = nullptr);

	void AddElement(UiDropDownItem* pItem);
	void AddElement(UiDropDownIconItem* pItem);

private:
	e3::Animation* mAnimation = nullptr;
};

#endif // UiDropDownBody_H_

