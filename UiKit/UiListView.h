
#ifndef UiListView_H_
#define UiListView_H_

#include "private/UiListViewBase.h"
#include "UiListViewItem.h"

class E3_EXPORT UiListView : public UiListViewBase
{
public:
	UiListView(e3::Element* pParent = nullptr);

	void AddElement(UiListViewItem* pItem);

	void SetSelectedItem(UiListViewItem* pItem);
	UiListViewItem* GetSelectedItem() { return mSelectedItem; }

private:
	UiListViewItem* mSelectedItem = nullptr;
};

#endif // UiListView_H_

