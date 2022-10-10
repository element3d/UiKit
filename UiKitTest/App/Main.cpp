#include "Main.h"
#include "UiTreeViewItemHeaderDefault.h"
#include "UiTreeViewItemHeaderMini.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	for (int i = 0; i < 5; ++i)
	{
		UiTreeViewItem* pItem = new UiTreeViewItem();
		UiTreeViewItemHeaderDefault* pHeader = new UiTreeViewItemHeaderDefault();
	///	pHeader->SetIndicatorPosition(UiRight);
		pItem->AddElement(pHeader);
		pHeader->SetTitle(std::string("Item ") + std::to_string(i));
		mTree->AddElement(pItem);
		for (int j = 0; j < 3; ++j)
		{
			UiTreeViewItem* pItem2 = new UiTreeViewItem();
			UiTreeViewItemHeaderMini* pHeader = new UiTreeViewItemHeaderMini();
	//		pHeader->SetIndicatorPosition(UiRight);
			UiText* T = new UiText();
			T->SetText(std::string("Child ") + std::to_string(j));
			pHeader->AddElement(T);
			pItem2->AddElement(pHeader);
		//	pHeader->SetTitle(std::string("Child ") + std::to_string(j));
			pItem->AddElement(pItem2);

			for (int j = 0; j < 3; ++j)
			{
				UiTreeViewItem* pItem3 = new UiTreeViewItem();
				UiTreeViewItemHeaderDefault* pHeader = new UiTreeViewItemHeaderDefault();
			//	pHeader->SetIndicatorPosition(UiRight);
				pItem3->AddElement(pHeader);
				pHeader->SetTitle(std::string("Child ") + std::to_string(j));
				pItem2->AddElement(pItem3);
			}

		}
	}
}
