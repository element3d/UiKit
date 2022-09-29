
#ifndef UiSwitch_H_
#define UiSwitch_H_

#include "private/UiSwitchBase.h"
#include "UiColor.h"

class E3_EXPORT UiSwitch : public UiSwitchBase
{
public:
	UiSwitch(e3::Element* pParent = nullptr);

	bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
};

#endif // UiSwitch_H_
