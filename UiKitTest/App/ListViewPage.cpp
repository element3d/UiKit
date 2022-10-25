#include "ListViewPage.h"

ListViewPage::ListViewPage(e3::Element* pParent)
	: ListViewPageBase(pParent)
{
	for (int i = 0; i < 50; ++i)
	{
		UiListViewItem* pItem = new UiListViewItem();
		mListView->AddElement(pItem);
		pItem->SetTitle(std::to_string(i) + " Item");
	}
}
