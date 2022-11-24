
#ifndef UiHoverable_H_
#define UiHoverable_H_

#include "private/UiHoverableBase.h"

class E3_EXPORT UiHoverable : public UiHoverableBase
{
public:
	UiHoverable(e3::Element* pParent = nullptr);

	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

};

#endif // UiHoverable_H_

