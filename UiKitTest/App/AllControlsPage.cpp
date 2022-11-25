#include "AllControlsPage.h"
#include "MenuButton.h"
#include "ButtonPage.h"
#include "CheckboxPage.h"
#include "ComboBoxPage.h"
#include "ExpanderPage.h"
#include "ListViewPage.h"
#include "RadioButtonPage.h"
#include "SliderPage.h"
#include "SwitchPage.h"
#include "TreeViewPage.h"
#include "TabViewPage.h"
#include "Main.h"

AllControlsPage::AllControlsPage(e3::Element* pParent)
	: AllControlsPageBase(pParent)
{

	mType = EPageType::AllControls;

	enum class EControlType 
	{
		Button,
		DropDownButton,
		Checkbox,
		ComboBox,
		Expander,
		ListView,
		MenuBar,
		RadioButton,
		Slider,
		Switch,
		TabView,
		TreeView
	};

	struct _Item 
	{
		std::string Title;
		std::string Desc;
		std::string Image;
	};


	std::vector<_Item> items = 
	{
		{
			"Button",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/Button.png"
		},
		{
			"DropDownButton",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/DropDownButton.png"
		},
		{
			"Checkbox",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/Checkbox.png"
		},
		{
			"ComboBox",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/ComboBox.png"
		},
		{
			"Expander",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/Expander.png"
		},
		{
			"ListView",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/ListView.png"
		},
		{
			"MenuBar",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/MenuBar.png"
		},
		{
			"RadioButton",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/RadioButton.png"
		},
		{
			"Slider",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/Slider.png"
		},
		{
			"Switch",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/ToggleSwitch.png"
		},
		{
			"TabView",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/TabView.png"
		},
		{
			"TreeView",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/TreeView.png"
		}
	};

	std::function<void(int)> fProcessClick = [this](int type){
		switch (type)
		{
		case (int)EControlType::Button:
		{
			mMain->Navigate(EPageType::Button);
			break;
		}
		case (int)EControlType::DropDownButton:
		{
			mMain->Navigate(EPageType::DropDownButton);
			break;
		}
		case (int)EControlType::Checkbox:
		{
			mMain->Navigate(EPageType::CheckBox);
			break;
		}
		case (int)EControlType::ComboBox:
		{
			mMain->Navigate(EPageType::ComboBox);
			break;
		}
		case (int)EControlType::Expander:
		{
			mMain->Navigate(EPageType::Expander);
			break;
		}
		case (int)EControlType::ListView:
		{
			mMain->Navigate(EPageType::ListView);
			break;
		}
		case (int)EControlType::MenuBar:
		{
			mMain->Navigate(EPageType::MenuBar);
			break;
		}
		case (int)EControlType::RadioButton:
		{
			mMain->Navigate(EPageType::RadioButton);
			break;
		}
		case (int)EControlType::Slider:
		{
			mMain->Navigate(EPageType::Slider);
			break;
		}
		case (int)EControlType::Switch:
		{
			mMain->Navigate(EPageType::Switch);
			break;
		}
		case (int)EControlType::TabView:
		{
			mMain->Navigate(EPageType::TabView);
			break;
		}
		case (int)EControlType::TreeView:
		{
			mMain->Navigate(EPageType::TreeView);
			break;
		}
		default:
			break;
		}
	};

	int i = 0;
	e3::Element* pRow;// = new e3::Element();
	// mMenu->AddElement(pRow);
	for (auto& item : items)
	{
		if (i % 2 == 0) 
		{ 
			pRow = new e3::Element();
			pRow->SetMarginBottom("10dp");
			mMenu->AddElement(pRow);
		}

		MenuButton* pB = new MenuButton();
		pB->SetTitle(item.Title);
		pB->SetDesc(item.Desc);
		pB->SetImage(item.Image);
		pB->SetMarginRight("10dp");
		pRow->AddElement(pB);
		pB->SignalOnClick.Connect([this, fProcessClick, i](e3::MouseEvent*){
			fProcessClick(i);
		});
		i++;
	}
}

void AllControlsPage::SetMain(Main* pMain)
{
	mMain = pMain;
}
