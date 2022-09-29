
#ifndef UiSlider_H_
#define UiSlider_H_

#include "private/UiSliderBase.h"

class E3_EXPORT UiSlider : public UiSliderBase
{
public:
	UiSlider(e3::Element* pParent = nullptr);

	bool OnMouseDown(e3::MouseEvent* pEvent) override;
	void OnMouseMove(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
};


#endif // UiSlider_H_

