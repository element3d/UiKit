
#ifndef UiExpander_H_
#define UiExpander_H_

#include "private/UiExpanderBase.h"
#include "UiExpanderBody.h"
#include "UiExpanderHeader.h"

class E3_EXPORT UiExpander : public UiExpanderBase
{
public:
	UiExpander(e3::Element* pParent = nullptr);

	void AddElement(UiExpanderBody* pBody);
	void AddElement(UiExpanderHeader* pHeader);

private:
	bool mExpanded = false;
	UiExpanderHeader* mExpanderHeader = nullptr;
};

#endif // UiExpander_H_

