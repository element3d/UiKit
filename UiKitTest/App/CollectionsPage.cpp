#include "CollectionsPage.h"
#include "Main.h"
#include "MenuButton.h"

CollectionsPage::CollectionsPage(e3::Element* pParent)
	: CollectionsPageBase(pParent)
{
	mType = EPageType::AllControls;

	enum class EControlType 
	{
		ListView,
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
			"ListView",
			"A control that responds a user input and raises a click event",
			"UiKitTest/Images/ControlImages/ListView.png"
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
		case (int)EControlType::ListView:
		{
			mMain->Navigate(EPageType::ListView);
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
