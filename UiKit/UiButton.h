
#ifndef UiButton_H_
#define UiButton_H_

#include "private/UiButtonBase.h"

enum E3_EXPORT UiStyle
{
	UiDefault,
	UiAccent
};

class E3_EXPORT UiButton : public UiButtonBase
{
public:
	UiButton(e3::Element* pParent = nullptr);

	bool OnMouseDown(e3::MouseEvent* pE) override;
	bool OnMouseUp(e3::MouseEvent* pE) override;
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

protected:
	UiStyle mStyle = UiDefault;

private:
  e3::Animation* mAnimation = nullptr;
	e3::Animation* mRippleAnimation = nullptr;
};

#endif // UiButton_H_

