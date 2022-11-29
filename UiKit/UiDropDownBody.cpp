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

void UiDropDownBody::AddElement(UiDropDownItem* pItem)
{
	UiDropDownBodyBase::AddElement(pItem);

	pItem->SignalOnClick.Connect([this](e3::MouseEvent*){
		if (!mAnimation)
			mAnimation = new e3::Animation();

		mAnimation->Start(0.1, [this](float v){
			SetOpacity(1 - v);
			}, [this](){
				GetDropdown()->Collapse();
				mAnimation = nullptr;
			});
	});
}

void UiDropDownBody::AddElement(UiDropDownIconItem* pItem)
{
	UiDropDownBodyBase::AddElement(pItem);

	pItem->SignalOnClick.Connect([this](e3::MouseEvent*){
		if (!mAnimation)
			mAnimation = new e3::Animation();

		mAnimation->Start(0.1, [this](float v){
			SetOpacity(1 - v);
			}, [this](){
				GetDropdown()->Collapse();
				mAnimation = nullptr;
			});
	});
}