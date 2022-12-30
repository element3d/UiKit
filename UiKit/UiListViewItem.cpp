#include "UiListViewItem.h"
#include "UiListView.h"
#include "UiKit.h"

UiListViewItem::UiListViewItem(e3::Element* pParent)
	: UiListViewItemBase(pParent)
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	SetHeight("24dp");
	SetBorderRadius(e3::Dim("6dp"));
	RemoveElement(mSelection);
	mSelection = nullptr;
	break;
  case EUiKitDesign::Material:
		SetBorderRadius(0);
		SetMargin(0);
		RemoveElement(mSelection);
		mSelection = nullptr;
		SetHeight("36dp");
		break;
  default:
	mSelection->SetVisibility(e3::EVisibility::Gone);
	break;
  }

}

void UiListViewItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void UiListViewItem::Select()
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	SetBackgroundLinearGradient(0, glm::vec4(75, 145, 247, 255), glm::vec4(54, 122, 246, 255));
	mTitle->SetTextColor(glm::vec4(255));
	break;
  case EUiKitDesign::Material:
	SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	break;
  default:
	{
	  SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
	  mSelection->SetVisibility(e3::EVisibility::Visible);

	  if (!mAnimation) mAnimation = new e3::Animation();
	  mAnimation->Start(0.1, [this](float v) {
		mSelection->SetScale(glm::vec3(1, v, 1), e3::ETransformAlignment::Center);
		}, [this]() {
		  mAnimation = nullptr;
		});

	}
	break;
  }

	auto pItem = mListView->GetSelectedItem();
	if (pItem && pItem != this) pItem->Unselect();
	mListView->SetSelectedItem(this);	
}

void UiListViewItem::Unselect()
{
  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
	mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));
	break;
  case EUiKitDesign::Material:
	break;
  default:  
	mSelection->SetVisibility(e3::EVisibility::Gone);
	break;
  }
  SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}

bool UiListViewItem::OnClick(e3::MouseEvent* pE) 
{
	
	Select();

	return true;
}

void UiListViewItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiListViewItemBase::OnMouseEnter(pE);
	/*UiKitOS os = UiKit::GetOS();
	switch (os)
	{
	case UiKitOS::MacOS:
	  mTitle->SetTextColor(glm::vec4(255));
	  break;
	}*/
}

void UiListViewItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiListViewItemBase::OnMouseLeave(pE);
	/*UiKitOS os = UiKit::GetOS();
	switch (os)
	{
	case UiKitOS::MacOS:
	  mTitle->SetTextColor(glm::vec4(50, 50, 50, 255));
	  break;
	}*/
}