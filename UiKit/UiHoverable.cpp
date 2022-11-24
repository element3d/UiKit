#include "UiHoverable.h"

UiHoverable::UiHoverable(e3::Element* pParent)
	: UiHoverableBase(pParent)
{

}

void UiHoverable::OnMouseEnter(e3::MouseEvent* pE)
{
	UiHoverableBase::OnMouseEnter(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
}

void UiHoverable::OnMouseLeave(e3::MouseEvent* pE)
{
	UiHoverableBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}