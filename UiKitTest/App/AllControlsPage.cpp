#include "AllControlsPage.h"
#include "MenuButton.h"
#include "ButtonPage.h"
#include "CheckboxPage.h"
#include "ComboBoxPage.h"
#include "ExpanderPage.h"
#include "ListViewPage.h"
#include "Main.h"

AllControlsPage::AllControlsPage(e3::Element* pParent)
	: AllControlsPageBase(pParent)
{

	enum class EControlType 
	{
		Button,
		Checkbox,
		ComboBox,
		Expander,
		ListView
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
		}
	};

	std::function<void(int)> fProcessClick = [this](int type){
		switch (type)
		{
		case (int)EControlType::Button:
		{
			mMain->Navigate(new ButtonPage());
			break;
		}
		case (int)EControlType::Checkbox:
		{
			mMain->Navigate(new CheckboxPage());
			break;
		}
		case (int)EControlType::ComboBox:
		{
			mMain->Navigate(new ComboBoxPage());
			break;
		}
		case (int)EControlType::Expander:
		{
			mMain->Navigate(new ExpanderPage());
			break;
		}
		case (int)EControlType::ListView:
		{
			mMain->Navigate(new ListViewPage());
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
		pB->SetOnClickCallback([this, fProcessClick, i](e3::MouseEvent*){
			fProcessClick(i);
		});
		i++;
	}
}

void AllControlsPage::SetMain(Main* pMain)
{
	mMain = pMain;
}
