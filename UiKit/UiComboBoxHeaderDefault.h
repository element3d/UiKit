
#ifndef UiComboBoxHeaderDefault_H_
#define UiComboBoxHeaderDefault_H_

#include "private/UiComboBoxHeaderDefaultBase.h"

class E3_EXPORT UiComboBoxHeaderDefault : public UiComboBoxHeaderDefaultBase
{
public:
	UiComboBoxHeaderDefault(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
};

#endif // UiComboBoxHeaderDefault_H_

