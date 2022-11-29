#include "BasicInputPage.h"
#include "Main.h"
#include "MenuButton.h"

BasicInputPage::BasicInputPage(e3::Element* pParent)
	: BasicInputPageBase(pParent)
{
	mType = EPageType::BasicInput;

	enum class EControlType 
	{
		Button,
		DropDownButton,
		Checkbox,
		ComboBox,
		RadioButton,
		Slider,
		Switch
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
