#include "UiDropDownBody.h"

UiDropDownBody::UiDropDownBody(e3::Element* pParent)
	: UiDropDownBodyBase(pParent)
{

}

void UiDropDownBody::Expand()
{
	UiDropDownBodyBase::Expand();

	SetTranslation(glm::vec3(0, e3::Dim("200dp"), 0));
}