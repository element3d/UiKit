#include "UiDropDownButton.h"

UiDropDownButton::UiDropDownButton(e3::Element* pParent)
	: UiDropDownButtonBase(pParent)
{

}

void UiDropDownButton::AddElement(UiDropDownBody* pBody)
{
	SetBody(pBody);
}

void UiDropDownButton::Expand()
{
	UiDropDownButtonBase::Expand();

	auto bg = GetBody()->GetGeometry();
	auto g = GetGeometry();

	e3::Animation* pA = new e3::Animation();
	pA->Start(0.1, [this, g, bg](float v){
			GetBody()->SetOpacity(v);
			GetBody()->SetTranslation(glm::vec3(g.width / 2 - bg.width / 2, v * e3::Dim("6dp"), 0));

		}, [](){
		
		});
}