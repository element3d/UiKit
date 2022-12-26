
#ifndef UiSlider_H_
#define UiSlider_H_

#include "private/UiSliderBase.h"

class E3_EXPORT UiSlider : public UiSliderBase
{
public:
	UiSlider(e3::Element* pParent = nullptr);

	bool OnMouseDown(e3::MouseEvent* pEvent) override;
	bool OnMouseUp(e3::MouseEvent* pEvent) override;
	void OnMouseMove(e3::MouseEvent* pEvent) override;

	void OnMouseLeave(e3::MouseEvent* e);
	void OnMouseEnter(e3::MouseEvent* e);

private:
	void _SetMacOSStyles();

private:
	e3::Animation* mAnimation = nullptr;
	e3::Animation* mInfoAnimation = nullptr;
	float mNValue = 0;
	
};


#endif // UiSlider_H_

