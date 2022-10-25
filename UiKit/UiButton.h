
#ifndef UiButton_H_
#define UiButton_H_

#include "private/UiButtonBase.h"

class E3_EXPORT UiButton : public UiButtonBase
{
public:
	UiButton(e3::Element* pParent = nullptr);

	bool OnMouseDown(e3::MouseEvent* pE) override;
	bool OnMouseUp(e3::MouseEvent* pE) override;
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
	void _SetMacOSStyles();
};

#endif // UiButton_H_

