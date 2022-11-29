#include "Main.h"
#include "UiTreeViewItemHeaderDefault.h"
#include "UiTreeViewItemHeaderMini.h"
#include "UiDivider.h"
#include "AllControlsPage.h"
#include "BasicInputPage.h"
#include "CollectionsPage.h"
#include "MainNavDrawerItem.h"
#include "UiIcon.h"
#include "ButtonPage.h"
#include "CheckboxPage.h"
#include "ExpanderPage.h"
#include "SliderPage.h"
#include "ComboBoxPage.h"
#include "RadioButtonPage.h"
#include "SwitchPage.h"
#include "ListViewPage.h"
#include "TreeViewPage.h"
#include "DropDownPage.h"
#include "TabViewPage.h"
#include "MenuBarPage.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{


	mMenus = 
	{
		{
			"Basic Input",
			"F16C",
			EPageType::BasicInput,
			{
				{
					EPageType::Button,
					"Button",
				},
				{
					EPageType::DropDownButton,
					"DropDownButton",
				},
				{
					EPageType::CheckBox,
					"CheckBox",
				},
				{
					EPageType::ComboBox,
					"ComboBox",
				},
				{
					EPageType::RadioButton,
					"RadioButton",
				},
				{
					EPageType::Slider,
					"Slider",
				},
				{
					EPageType::Switch,
					"Switch"
				}
			}
		},
		{
			"Collections",
			"F0E2",
			EPageType::Collections,
			{
				{
					EPageType::ListView,
					"ListView",
				},
				{
					EPageType::TreeView,
					"TreeView"
				}
			}
		},
		{
			"Date and Time",
			"EC92",
			EPageType::AllControls,
		},
		{
			"Dialogs and Flyouts",
			"E8BD",
			EPageType::AllControls,
		},
		{
			"Layout",
			"E8B9",
			EPageType::AllControls,
		},
		{
			"Media",
			"EA69",
			EPageType::AllControls,
		},
		{
			"Menus and Toolbars",
			"E74E",
			EPageType::AllControls,
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
	pDiv->SetMarginBottom("4dp");
	// pDiv->SetMarginTop();
//	mDrawer->InsertElement(2, pDiv);
	{
		UiNavigationDrawerItem* pHeader = new UiNavigationDrawerItem();
		// pHeader->SetHeight("40dp");
		// pHeader->SetIndicatorPosition(UiRight);
		pHeader->SetTitle("All Controls");
		pHeader->SetIcon("E700");
	//	mDrawer->InsertElement(2, pHeader);

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
	//	mDrawer->InsertElement(2, pHeader);
	}



	for (int i = 0; i < mMenus.size(); ++i)
	{
		// UiTreeViewItem* pItem = new UiTreeViewItem();
		UiNavigationDrawerItem* pHeader = new UiNavigationDrawerItem();
		pHeader->SetTitle(mMenus[i].Title);
		pHeader->SetIcon(mMenus[i].Icon);
		mDrawer->AddElement(pHeader);

		pHeader->SignalOnClick.Connect([this, i](e3::MouseEvent*){
			Navigate(mMenus[i].PageType);
		});

		int j = 0;
		for (auto& c : mMenus[i].Children)
		{
			UiNavigationDrawerItem* pChild = new UiNavigationDrawerItem();
			pChild->SetTitle(c.Title);
			pHeader->AddElement(pChild);

			pChild->SignalOnClick.Connect([this, j, i](e3::MouseEvent*){
				Page* pC = nullptr;
				EPageType pt = mMenus[i].Children[j].PageType;
				/*switch (pt
)
				{
				case EPageType::AllControls:
					break;
				case EPageType::Button:
					pC = new ButtonPage();
					break;
				case EPageType::CheckBox:
					pC = new CheckboxPage();
					break;
				case EPageType::ComboBox:
					pC = new ComboBoxPage();
					break;
				case EPageType::RadioButton:
					pC = new RadioButtonPage();
					break;
				case EPageType::Slider:
					pC = new SliderPage();
					break;
				case EPageType::Switch:
					pC = new SwitchPage();
					break;
				case EPageType::ListView:
					pC = new ListViewPage();
					break;
				case EPageType::TreeView:
					pC = new TreeViewPage();
					break;
				default:
					break;
				}
			
				if (pC)
					Navigate(pC);*/
				Navigate(pt);
			});

			++j;
		}
	}

	AllControlsPage* pC = new AllControlsPage();
	pC->SetMain(this);
	mRouter->AddElement(pC);
	mHistory.push_back(pC);
	
	mBackButton->SignalOnClick.Connect([this](e3::MouseEvent*){
			NavigateBack();
	});

	mDrawerToggle->SignalOnClick.Connect([this](e3::MouseEvent*){
			mDrawer->Toggle();
	});

	mDrawer->SignalOnToggle.Connect([this](bool minimized){
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

void Main::Navigate(EPageType page)
{
	auto it = std::find_if(mHistory.begin(), mHistory.end(), [page](Page* pPage){
		return pPage->GetType() == page;
	});

	Page* pPage = nullptr;
	if (it != mHistory.end()) 
	{
		pPage = *it;
	}
	else
	{
		switch (page)
		{
		case EPageType::AllControls:
			pPage = new AllControlsPage();
			((AllControlsPage*)pPage)->SetMain(this);
			break;
		case EPageType::BasicInput:
			pPage = new BasicInputPage();
			pPage->SetMain(this);
			break;
		case EPageType::Collections:
			pPage = new CollectionsPage();
			pPage->SetMain(this);
			break;
		case EPageType::Button:
			pPage = new ButtonPage();
			break;
		case EPageType::DropDownButton:
			pPage = new DropDownPage();
			break;
		case EPageType::CheckBox:
				pPage = new CheckboxPage();
			break;
		case EPageType::ComboBox:
				pPage = new ComboBoxPage();
			break;
		case EPageType::RadioButton:
				pPage = new RadioButtonPage();
			break;
		case EPageType::Slider:
				pPage = new SliderPage();
			break;
		case EPageType::Switch:
				pPage = new SwitchPage();
			break;
		case EPageType::ListView:
				pPage = new ListViewPage();
			break;
		case EPageType::MenuBar:
				pPage = new MenuBarPage();
			break;
		case EPageType::TabView:
				pPage = new TabViewPage();
			break;
		case EPageType::TreeView:
				pPage = new TreeViewPage();
			break;
		case EPageType::Expander:
				pPage = new ExpanderPage();
			break;
		default:
			return;
			break;
		}
	}
	if (mRouter->GetChildren()[0] != pPage)
	{
		if (it != mHistory.end()) mHistory.erase(it);
		mRouter->RemoveAllElements(false);
		mHistory.push_back(pPage);
		mRouter->AddElement(pPage);
	}
}

void Main::Navigate(Page* pPage)
{
	//mPrevPage = mRouter->GetChildren()[0];
	mRouter->RemoveAllElements(false);
	mHistory.push_back(pPage);
	mRouter->AddElement(pPage);
	
}

void Main::NavigateBack()
{
	if (mHistory.size() <= 1) return;

	mRouter->RemoveAllElements();
	mHistory.pop_back();
	mRouter->AddElement(mHistory[mHistory.size() - 1]);
//	mRouter->AddElement(mPrevPage);
	//mPrevPage = nullptr;

	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, e3::EAnimation::EaseOutQuad, [this](float v){
		float scale = 1.05 - 0.05 * v;
		mRouter->GetChildren()[0]->SetScale(glm::vec3(scale, scale, 1), e3::ETransformAlignment::Center);	
		mRouter->GetChildren()[0]->SetOpacity(v);
	}, [](){});
}