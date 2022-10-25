#include "Main.h"
#include "UiTreeViewItemHeaderDefault.h"
#include "UiTreeViewItemHeaderMini.h"
#include "UiDivider.h"
#include "AllControlsPage.h"
#include "MainNavDrawerItem.h"
#include "UiIcon.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	struct _Menu
	{
		std::string Title;
		std::string Icon;
	};

	std::vector<_Menu> menus = 
	{
		{
			"Basic Input",
			"F16C"
		},
		{
			"Collections",
			"F0E2"
		},
		{
			"Date and Time",
			"EC92"
		},
		{
			"Dialogs and Flyouts",
			"E8BD"
		},
		{
			"Layout",
			"E8B9"
		},
		{
			"Media",
			"EA69"
		},
		{
			"Menus and Toolbars",
			"E74E"
		},
		{
			"Motion",
			"EB44"
		},
		{
			"Navigation",
			"E700"
		}
	};

	UiDivider* pDiv = new UiDivider();
	mDrawer->InsertElement(2, pDiv);
	{
		UiNavigationDrawerItem* pHeader = new UiNavigationDrawerItem();
		// pHeader->SetHeight("40dp");
		// pHeader->SetIndicatorPosition(UiRight);
		pHeader->SetTitle("All Controls");
		pHeader->SetIcon("E700");
		mDrawer->InsertElement(2, pHeader);

		//UiIcon* pE = new UiIcon();
		//pE->SetWidth(20);
		//pE->SetHeight(20);
		// pE->SetCharcode("E700");
		// pE->SetBackgroundImage("UiKitTest/Images/ControlIcons/TimingDurationIcon.png");
	//	pHeader->AddElement(pE);
	}
	{
		UiNavigationDrawerItem* pHeader = new UiNavigationDrawerItem();
		pHeader->SetTitle("Home");
		pHeader->SetIcon("E80F");
		mDrawer->InsertElement(2, pHeader);
	}



	for (int i = 0; i < menus.size(); ++i)
	{
		// UiTreeViewItem* pItem = new UiTreeViewItem();
		UiNavigationDrawerItem* pHeader = new UiNavigationDrawerItem();
		pHeader->SetTitle(menus[i].Title);
		pHeader->SetIcon(menus[i].Icon);
	
		mDrawer->AddElement(pHeader);
		for (int j = 0; j < 3; ++j)
		{
			UiNavigationDrawerItem* pChild = new UiNavigationDrawerItem();
			pChild->SetTitle(menus[i].Title);
			// pChild->SetIcon(menus[i].Icon);
			pHeader->AddElement(pChild);
			// UiTreeViewItem* pItem2 = new UiTreeViewItem();
			//UiTreeViewItemHeaderMini* pHeader = new UiTreeViewItemHeaderMini();
	//		pHeader->SetIndicatorPosition(UiRight);
			//UiText* T = new UiText();
			//T->SetText(std::string("Child ") + std::to_string(j));
			//pHeader->AddElement(T);
			// pItem2->AddElement(pHeader);
		//	pHeader->SetTitle(std::string("Child ") + std::to_string(j));
			//pItem->AddElement(pHeader);

			/*for (int j = 0; j < 3; ++j)
			{
				UiTreeViewItem* pItem3 = new UiTreeViewItem();
				UiTreeViewItemHeaderDefault* pHeader = new UiTreeViewItemHeaderDefault();
			//	pHeader->SetIndicatorPosition(UiRight);
				pItem3->AddElement(pHeader);
				pHeader->SetTitle(std::string("Child ") + std::to_string(j));
				pItem2->AddElement(pItem3);
			}*/

		}
	}

	AllControlsPage* pC = new AllControlsPage();
	pC->SetMain(this);
	mRouter->AddElement(pC);
	
	mBackButton->SetOnClickCallback([this](e3::MouseEvent*){
			NavigateBack();
	});

	mDrawerToggle->SetOnClickCallback([this](e3::MouseEvent*){
			mDrawer->Toggle();
	});

	mDrawer->AddOnToggleCallback([this](bool minimized){
		if (minimized) 
		{
			mSearchInput->SetVisibility(e3::EVisibility::Hidden);
			mSearch->SetVisibility(e3::EVisibility::Visible);
		}
		else 
		{
			mSearchInput->SetVisibility(e3::EVisibility::Visible);
			mSearch->SetVisibility(e3::EVisibility::Hidden);
		}
	});
}

void Main::Navigate(e3::Element* pPage)
{
	mPrevPage = mRouter->GetChildren()[0];
	mRouter->RemoveAllElements(false);
	mRouter->AddElement(pPage);
}

void Main::NavigateBack()
{
	if (!mPrevPage) return;

	mRouter->RemoveAllElements();
	mRouter->AddElement(mPrevPage);
	mPrevPage = nullptr;

	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, e3::EAnimation::EaseOutQuad, [this](float v){
		float scale = 1.05 - 0.05 * v;
		mRouter->GetChildren()[0]->SetScale(glm::vec3(scale, scale, 1), e3::ETransformAlignment::Center);	
		mRouter->GetChildren()[0]->SetOpacity(v);
	}, [](){});
}