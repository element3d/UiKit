
#ifndef UiCheckBox_H_
#define UiCheckBox_H_

#include "private/UiCheckBoxBase.h"
#include "UiColor.h"

class E3_EXPORT UiCheckBox : public UiCheckBoxBase
{
public:
	UiCheckBox(e3::Element* pParent = nullptr);

	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
	bool mChecked = false;
};

#endif // UiCheckBox_H_

