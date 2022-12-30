#include "UiDropDownBody.h"
#include "UiKit.h"

UiDropDownBody::UiDropDownBody(e3::Element* pParent)
	: UiDropDownBodyBase(pParent)
{
  EUiKitDesign design = UiKit::GetDesign();
  switch (design)
  {
  case EUiKitDesign::Windows:
		break;
  case EUiKitDesign::Apple:
		break;
  case EUiKitDesign::Material:
		SetBorderRadius(0);
		SetPadding(0);
		SetBorderSize(0);
		SetBackgroundColor(glm::vec4(255));
		break;
  default:
	break;
  }
}

void UiDropDownBody::Expand()
{
	UiDropDownBodyBase::Expand();

	SetTranslation(glm::vec3(0, e3::Dim("200dp"), 0));
}

void UiDropDownBody::Collapse()
{
  if (!mAnimation)
	mAnimation = new e3::Animation();

  mAnimation->Start(0.1, [this](float v) {
	SetOpacity(1 - v);
	}, [this]() {
	  GetDropdown()->Collapse();
	  mAnimation = nullptr;
	});
}

void UiDropDownBody::AddElement(UiDropDownItem* pItem)
{
	UiDropDownBodyBase::AddElement(pItem);

	pItem->SignalOnClick.Connect([this](e3::MouseEvent*){
	  Collapse();
	});
}

void UiDropDownBody::AddElement(UiDropDownIconItem* pItem)
{
	UiDropDownBodyBase::AddElement(pItem);

	pItem->SignalOnClick.Connect([this](e3::MouseEvent*) {
	  Collapse();
	});
}