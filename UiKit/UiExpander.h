
#ifndef UiExpander_H_
#define UiExpander_H_

#include "private/UiExpanderBase.h"
#include "UiExpanderBody.h"

class E3_EXPORT UiExpander : public UiExpanderBase
{
public:
	UiExpander(e3::Element* pParent = nullptr);

	void AddElement(UiExpanderBody* pBody);

private:
	bool mExpanded = false;
};

#endif // UiExpander_H_

