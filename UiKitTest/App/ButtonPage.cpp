#include "ButtonPage.h"

ButtonPage::ButtonPage(e3::Element* pParent)
	: ButtonPageBase(pParent)
{
	mType = EPageType::Button;

	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, e3::EAnimation::EaseOutQuad, [this](float v){
		float scale = 0.95 + 0.05 * v;
		SetScale(glm::vec3(scale, scale, 1), e3::ETransformAlignment::Center);	
		SetOpacity(v);
	}, [](){});
}
