#include "UiDropDownButton.h"

UiDropDownButton::UiDropDownButton(e3::Element* pParent)
	: UiDropDownButtonBase(pParent)
{

}

void UiDropDownButton::AddElement(e3::Element* pElement)
{
	mContent->AddElement(pElement);
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
	pA->Start(0.2, [this, g, bg](float v){
			GetBody()->SetOpacity(v);
			GetBody()->SetTranslation(glm::vec3(g.width / 2 - bg.width / 2, v * e3::Dim("6dp"), 0));

		}, [](){
		
		});
}

void UiDropDownButton::OnMouseEnter(e3::MouseEvent* pE)
{
	UiDropDownButtonBase::OnMouseEnter(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0173 * 255));
}

void UiDropDownButton::OnMouseLeave(e3::MouseEvent* pE)
{
	UiDropDownButtonBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}