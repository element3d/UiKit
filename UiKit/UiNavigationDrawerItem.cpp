#include "UiNavigationDrawerItem.h"
#include "UiNavigationDrawer.h"

UiNavigationDrawerItem::UiNavigationDrawerItem(e3::Element* pParent)
	: UiNavigationDrawerItemBase(pParent)
{
	mExpandIcon->SetVisibility(e3::EVisibility::Gone);
	mChildCont->SetVisibility(e3::EVisibility::Hidden);
}


void UiNavigationDrawerItem::Select()
{
	if (mDrawer && mDrawer->mSelectedItem) mDrawer->mSelectedItem->Unselect();
	mSelection->SetVisibility(e3::EVisibility::Visible);
	mHeader->SetBackgroundColor(glm::vec4(0, 0, 0, 15));

	if (mDrawer) mDrawer->mSelectedItem = this;
}

void UiNavigationDrawerItem::SetIcon(const std::string charcode)
{
	mIcon->SetCharcode(charcode);
}

void UiNavigationDrawerItem::SetTitle(const std::string title)
{
	mTitle->SetText(title);
}

void UiNavigationDrawerItem::OnItemChildAdded() 
{
	mExpandIcon->SetVisibility(e3::EVisibility::Visible);
}

void UiNavigationDrawerItem::Unselect()
{
	mSelection->SetVisibility(e3::EVisibility::Gone);
	mHeader->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}

void UiNavigationDrawerItem::AddElement(e3::Element* pElement)
{
	mContainer->AddElement(pElement);
}

void UiNavigationDrawerItem::AddElement(UiNavigationDrawerItem* pChild)
{
	pChild->mDrawer = mDrawer;
	mExpandIcon->SetVisibility(e3::EVisibility::Visible);
	mChildCont->AddElement(pChild);
}

void UiNavigationDrawerItem::SetNavigationDrawer(UiNavigationDrawer* pDrawer) 
{
	mDrawer = pDrawer; 
	mDrawer->AddOnToggleCallback([this](bool minimized){
		if (minimized) 	mExpandIcon->SetVisibility(e3::EVisibility::Hidden);
		else 	mExpandIcon->SetVisibility(e3::EVisibility::Visible);
	});
}

#include <e3/Application.h>
bool UiNavigationDrawerItem::OnClick(e3::MouseEvent* pE) 
{
	if (mHeader->GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY())))
	{
			Select();
			if (mChildCont->GetNumChildren())
			{
				if (mDrawer && mDrawer->IsMinimized())
				{
					RemoveElement(mChildCont, false);
					mMenu = new e3::Element();
					auto pMenu = mMenu;
					pMenu->SetWidth("150dp");
					pMenu->SetBorderRadius(8);
					pMenu->SetOrientation(e3::EOrientation::Vertical);
					pMenu->SetPositionType(e3::EPositionType::Absolute);
					pMenu->AddElement(mChildCont);
					pMenu->SetBackgroundColor(glm::vec4(255, 255, 255, 255));
					pMenu->SetPadding("8dp");
					pMenu->SetPaddingLeft("4dp");
					pMenu->SetPaddingRight("4dp");

					e3::ShadowParams sh;
					sh.BlurSize = 10;
					sh.Color = glm::vec4(150, 150, 150, 255);
					sh.Offset = glm::vec2(0,5);
					sh.Opacity = 1;
					pMenu->SetShadow(sh);
					GetApplication()->GetElement()->AddElement(pMenu);

					mChildCont->SetVisibility(e3::EVisibility::Visible);

					pMenu->SetLeft(0);
					pMenu->SetTop(0);
					auto g = GetGeometry();
					pMenu->SetTranslation(glm::vec3(g.x + g.width + 10, g.y, 0));
				}
				else 
				{
					mExpanded = !mExpanded;
					if (mExpanded) mChildCont->SetVisibility(e3::EVisibility::Visible);
					else mChildCont->SetVisibility(e3::EVisibility::Hidden);
				}
			}
	}


	/*mExpanded = !mExpanded;
	OnChange(mExpanded);
	if (mOnChangeCallback) mOnChangeCallback(mExpanded);*/

	return UiNavigationDrawerItemBase::OnClick(pE);
}

void UiNavigationDrawerItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiNavigationDrawerItemBase::OnMouseEnter(pE);
	mHeader->SetBackgroundColor(glm::vec4(0, 0, 0, 10));
}

void UiNavigationDrawerItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiNavigationDrawerItemBase::OnMouseLeave(pE);
	mHeader->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}