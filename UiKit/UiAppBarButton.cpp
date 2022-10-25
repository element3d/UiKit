#include "UiAppBarButton.h"

UiAppBarButton::UiAppBarButton(e3::Element* pParent)
	: UiAppBarButtonBase(pParent)
{

}

void UiAppBarButton::SetIcon(const std::string& charcode)
{
	mIcon->SetCharcode(charcode);
}

void UiAppBarButton::OnMouseEnter(e3::MouseEvent* pE)
{
	SetBackgroundColor(glm::vec4(230, 230, 230, 230));
	UiAppBarButtonBase::OnMouseEnter(pE);
}

void UiAppBarButton::OnMouseLeave(e3::MouseEvent* pE) 
{
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	UiAppBarButtonBase::OnMouseLeave(pE);
}