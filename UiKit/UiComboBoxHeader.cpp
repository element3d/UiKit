#include "UiComboBoxHeader.h"

UiComboBoxHeader::UiComboBoxHeader(e3::Element* pParent)
	: UiComboBoxHeaderBase(pParent)
{

}

void UiComboBoxHeader::OnMouseEnter(e3::MouseEvent* pE)
{
	UiComboBoxHeaderBase::OnMouseEnter(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
}

void UiComboBoxHeader::OnMouseLeave(e3::MouseEvent* pE)
{
	UiComboBoxHeaderBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}