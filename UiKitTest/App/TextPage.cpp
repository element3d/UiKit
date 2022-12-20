#include "TextPage.h"
#include "Main.h"
#include "MenuButton.h"
#include "InputPage.h"

TextPage::TextPage(e3::Element* pParent)
	: TextPageBase(pParent)
{
		mType = EPageType::AllControls;

	enum class EControlType 
	{
		Input,
		NumberInput
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
			"Input",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/TextBox.png"
		},
		{
			"NumberInput",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/NumberBox.png"
		}
	};

	std::function<void(int)> fProcessClick = [this](int type){
		switch (type)
		{
		case (int)EControlType::Input:
		{
			mMain->Navigate(EPageType::Input);
			break;
		}
		case (int)EControlType::NumberInput:
		{
			mMain->Navigate(EPageType::NumberInput);
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
