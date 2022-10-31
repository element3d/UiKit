
#ifndef UiComboBoxHeader_H_
#define UiComboBoxHeader_H_

#include "private/UiComboBoxHeaderBase.h"

class E3_EXPORT UiComboBoxHeader : public UiComboBoxHeaderBase
{
public:
	UiComboBoxHeader(e3::Element* pParent = nullptr);

	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);
};

#endif // UiComboBoxHeader_H_

