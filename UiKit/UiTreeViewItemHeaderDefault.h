
#ifndef UiTreeViewItemHeaderDefault_H_
#define UiTreeViewItemHeaderDefault_H_

#include "private/UiTreeViewItemHeaderDefaultBase.h"

class E3_EXPORT UiTreeViewItemHeaderDefault : public UiTreeViewItemHeaderDefaultBase
{

public:
	UiTreeViewItemHeaderDefault(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void Select();
	void Unselect();

	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

};

#endif // UiTreeViewItemHeaderDefault_H_

