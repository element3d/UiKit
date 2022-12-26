#include "UiHoverable.h"
#include "UiKit.h"

UiHoverable::UiHoverable(e3::Element* pParent)
	: UiHoverableBase(pParent)
{

}

void UiHoverable::OnMouseEnter(e3::MouseEvent* pE)
{
	UiHoverableBase::OnMouseEnter(pE);
	EUiKitDesign os = UiKit::GetDesign();
	switch (os)
	{
	case EUiKitDesign::Apple:
	//  mHover->SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	  break;
	default:
	  mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	  break;
	}
}

void UiHoverable::OnMouseLeave(e3::MouseEvent* pE)
{
	UiHoverableBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}