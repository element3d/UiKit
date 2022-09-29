#include "Main.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	for (int i = 0; i < 5; ++i)
	{
		UiTreeViewItem* pItem = new UiTreeViewItem();
		pItem->SetText(std::string("Item ") + std::to_string(i));
		mTree->AddElement(pItem);
		for (int j = 0; j < 3; ++j)
		{
			UiTreeViewItem* pItem2 = new UiTreeViewItem();
			pItem->AddElement(pItem2);
		}
	}
}
