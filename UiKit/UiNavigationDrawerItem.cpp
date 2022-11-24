#include "UiNavigationDrawerItem.h"
#include "UiNavigationDrawer.h"
#include <e3/Application.h>

UiNavigationDrawerItem::UiNavigationDrawerItem(e3::Element* pParent)
	: UiNavigationDrawerItemBase(pParent)
{
	mExpandIcon->SetVisibility(e3::EVisibility::Gone);
	mChildCont->SetVisibility(e3::EVisibility::Hidden);

	mHover->SignalOnMouseEnter.Connect([this](e3::MouseEvent* pE){
			mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0373 * 255));
			pE->Stop();
	});

	mHover->SignalOnMouseLeave.Connect([this](e3::MouseEvent* pE){
		mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
		pE->Stop();
	});

	mHeader->SignalOnClick.Connect([this](e3::MouseEvent* pE){

		if (!mConn.Connected())
		{
			mConn = GetApplication()->GetElement()->SignalOnClick.Connect([this](e3::MouseEvent* pE){
				if (mHeader->GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY())))
				{

				}
				else if (mMenu && mExpanded && !mMenu->GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY())) && mChildCont->GetParent() == mMenu)
				{
						GetApplication()->GetElement()->RemoveElement(mMenu, false);
						mExpanded = false;
						pE->Stop();
				}
			});
		}

		Select();
		if (!mDrawer || !mChildCont->GetNumChildren()) 
		{
			UiNavigationDrawerItemBase::OnClick(pE);
			pE->Stop();
			return true;
		}

		if (mDrawer->IsMinimized())
		{
			if (!mMenu)
			{
				RemoveElement(mChildCont, false);
				mMenu = new e3::Element();
				auto pMenu = mMenu;
				pMenu->SetMinWidth("150dp");
				pMenu->SetMaxWidth("200dp");
				pMenu->SetBorderRadius(8);
				pMenu->SetOrientation(e3::EOrientation::Vertical);
				pMenu->SetPositionType(e3::EPositionType::Absolute);
				pMenu->AddElement(mChildCont);
				pMenu->SetBackgroundColor(glm::vec4(250, 250, 250, 220));
				pMenu->SetPadding("8dp");
				// pMenu->SetStopEvents(true);
				pMenu->SetPaddingLeft("4dp");
				pMenu->SetPaddingRight("4dp");
				pMenu->SetFilterBlur(50);

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
				mExpanded = true;
			}
			else
			{
				if (mExpanded)
				{
					GetApplication()->GetElement()->RemoveElement(mMenu, false);
					mExpanded = false;
				}
				else
				{
					if (mChildCont->GetParent() == this) 
					{
						RemoveElement(mChildCont, false);
						mChildCont->SetHeight(mChildContHeight);
						mChildCont->SetVisibility(e3::EVisibility::Visible);
						mMenu->AddElement(mChildCont);
					}
					GetApplication()->GetElement()->AddElement(mMenu);
					mExpanded = true;
				}
			}
		}
		else 
		{
			if (mChildCont->GetParent() != this)
			{
				mMenu->RemoveElement(mChildCont, false);
				e3::Element::AddElement(mChildCont);
			}
			mExpanded = !mExpanded;
			if (mExpanded) 
			{
				mChildCont->SetVisibility(e3::EVisibility::Visible);
				mChildCont->UpdateGeometry();
				auto geo = mChildCont->GetGeometry();
				_AnimatedExpand();
			}
			else
			{
				_AnimatedCollapse();
			}
		}
		UiNavigationDrawerItemBase::OnClick(pE);
		pE->Stop();
	});
}


void UiNavigationDrawerItem::Select()
{
	if (mDrawer && mDrawer->mSelectedItem) mDrawer->mSelectedItem->Unselect();
	mSelection->SetVisibility(e3::EVisibility::Visible);
	mHeader->SetBackgroundColor(glm::vec4(0, 0, 0, 8));

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
	if (mDrawer->IsMinimized() && mMenu) 
	{
		GetApplication()->GetElement()->RemoveElement(mMenu, false);
		mExpanded = false;
	}
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
	mDrawer->SignalOnToggle.Connect([this](bool minimized){
		if (minimized) {
			mExpandIcon->SetVisibility(e3::EVisibility::Hidden);
			if (mExpanded) _AnimatedCollapse(false);
		}
		else if (mChildCont->GetNumChildren()) mExpandIcon->SetVisibility(e3::EVisibility::Visible);
	});
}

#include <e3/Application.h>
bool UiNavigationDrawerItem::OnClick(e3::MouseEvent* pE) 
{
	
	/*mHeader->SignalOnClick.Connect([this](e3::MouseEvent* pE){
		Select();
		if (!mDrawer || !mChildCont->GetNumChildren()) 
		{
			UiNavigationDrawerItemBase::OnClick(pE);
			pE->Stop();
			return true;
		}

		if (mDrawer->IsMinimized())
		{
			if (!mMenu)
			{
				RemoveElement(mChildCont, false);
				mMenu = new e3::Element();
				auto pMenu = mMenu;
				pMenu->SetMinWidth("150dp");
				pMenu->SetMaxWidth("200dp");
				pMenu->SetBorderRadius(8);
				pMenu->SetOrientation(e3::EOrientation::Vertical);
				pMenu->SetPositionType(e3::EPositionType::Absolute);
				pMenu->AddElement(mChildCont);
				pMenu->SetBackgroundColor(glm::vec4(250, 250, 250, 220));
				pMenu->SetPadding("8dp");
				// pMenu->SetStopEvents(true);
				pMenu->SetPaddingLeft("4dp");
				pMenu->SetPaddingRight("4dp");
				pMenu->SetFilterBlur(50);

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
				mExpanded = true;
			}
			else
			{
				if (mExpanded)
				{
					GetApplication()->GetElement()->RemoveElement(mMenu, false);
					mExpanded = false;
				}
				else
				{
					if (mChildCont->GetParent() == this) 
					{
						RemoveElement(mChildCont, false);
						mChildCont->SetHeight(mChildContHeight);
						mChildCont->SetVisibility(e3::EVisibility::Visible);
						mMenu->AddElement(mChildCont);
					}
					GetApplication()->GetElement()->AddElement(mMenu);
					mExpanded = true;
				}
			}
		}
		else 
		{
			if (mChildCont->GetParent() != this)
			{
				mMenu->RemoveElement(mChildCont, false);
				e3::Element::AddElement(mChildCont);
			}
			mExpanded = !mExpanded;
			if (mExpanded) 
			{
				mChildCont->SetVisibility(e3::EVisibility::Visible);
				mChildCont->UpdateGeometry();
				auto geo = mChildCont->GetGeometry();
				_AnimatedExpand();
			}
			else
			{
				_AnimatedCollapse();
			}
		}
		UiNavigationDrawerItemBase::OnClick(pE);
		pE->Stop();
	});*/

	if (!mConn.Connected())
	{
		mConn = GetApplication()->GetElement()->SignalOnClick.Connect([this](e3::MouseEvent* pE){
			if (mHeader->GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY())))
			{

			}
			else if (mMenu && mExpanded && !mMenu->GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY())) && mChildCont->GetParent() == mMenu)
			{
					GetApplication()->GetElement()->RemoveElement(mMenu, false);
					mExpanded = false;
					pE->Stop();
			}
		});
	}

	/*mExpanded = !mExpanded;
	OnChange(mExpanded);
	if (mOnChangeCallback) mOnChangeCallback(mExpanded);*/

	return UiNavigationDrawerItemBase::OnClick(pE);
}

void UiNavigationDrawerItem::_AnimatedExpand()
{
	mAnimation = new e3::Animation();
	auto h = mChildCont->GetGeometry().height;
	if (mChildContHeight == 0) mChildContHeight = h;
	else h = mChildContHeight;
	mAnimation->Start(0.2, [this, h](float v){
		mChildCont->SetHeight(v * h);
		mExpandIcon->SetRotation(180 * v, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
	}, [this](){
	});
}

void UiNavigationDrawerItem::_AnimatedCollapse(bool hideChildCont)
{
	mExpanded = false;
	mAnimation = new e3::Animation();
	auto h = mChildCont->GetGeometry().height;
	mAnimation->Start(0.2, [this, h](float v){
		mChildCont->SetHeight((1 - v) * h);
		mExpandIcon->SetRotation(180 * (1 - v), glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
	}, [this, hideChildCont, h](){
			mChildCont->SetVisibility(e3::EVisibility::Hidden);
			if (hideChildCont) 
			{
			}
			else
			{
				mChildCont->SetHeight(h);
			}
	});
}


void UiNavigationDrawerItem::OnMouseEnter(e3::MouseEvent* pE)
{
	UiNavigationDrawerItemBase::OnMouseEnter(pE);
}

void UiNavigationDrawerItem::OnMouseLeave(e3::MouseEvent* pE)
{
	UiNavigationDrawerItemBase::OnMouseLeave(pE);
}