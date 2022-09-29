
#ifndef UiButton_H_
#define UiButton_H_

#include "private/UiButtonBase.h"

class E3_EXPORT UiButton : public UiButtonBase
{
public:
	UiButton(e3::Element* pParent = nullptr);

private:
	void _SetMacOSStyles();
};

#endif // UiButton_H_

