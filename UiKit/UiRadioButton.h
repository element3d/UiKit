
#ifndef UiRadioButton_H_
#define UiRadioButton_H_

#include "private/UiRadioButtonBase.h"
#include "UiColor.h"

class E3_EXPORT UiRadioButton : public UiRadioButtonBase
{
public:
	UiRadioButton(e3::Element* pParent = nullptr);
	
	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
};

#endif // UiRadioButton_H_

