
#ifndef UiSwitch_H_
#define UiSwitch_H_

#include "private/UiSwitchBase.h"
#include "UiColor.h"

class E3_EXPORT UiSwitch : public UiSwitchBase
{
public:
	UiSwitch(e3::Element* pParent = nullptr);

	void Check();
	void UnCheck();

	bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
	bool mChecked = false;
};

#endif // UiSwitch_H_
