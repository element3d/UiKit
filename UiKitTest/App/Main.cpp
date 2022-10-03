#include "Main.h"
#include "UiTreeViewItemHeaderDefault.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	for (int i = 0; i < 5; ++i)
	{
		UiTreeViewItem* pItem = new UiTreeViewItem();
		UiTreeViewItemHeaderDefault* pHeader = new UiTreeViewItemHeaderDefault();
		pItem->AddElement(pHeader);
		pHeader->SetTitle(std::string("Item ") + std::to_string(i));
		mTree->AddElement(pItem);
		for (int j = 0; j < 3; ++j)
		{
			UiTreeViewItem* pItem2 = new UiTreeViewItem();
			UiTreeViewItemHeaderDefault* pHeader = new UiTreeViewItemHeaderDefault();
			pItem2->AddElement(pHeader);
			pHeader->SetTitle(std::string("Child ") + std::to_string(j));
			pItem->AddElement(pItem2);
		}
	}
}
