
#ifndef UiTreeViewItemHeaderDefault_H_
#define UiTreeViewItemHeaderDefault_H_

#include "private/UiTreeViewItemHeaderDefaultBase.h"

class E3_EXPORT UiTreeViewItemHeaderDefault : public UiTreeViewItemHeaderDefaultBase
{

public:
	UiTreeViewItemHeaderDefault(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);


};

#endif // UiTreeViewItemHeaderDefault_H_

