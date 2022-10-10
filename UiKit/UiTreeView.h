
#ifndef UiTreeView_H_
#define UiTreeView_H_

#include "private/UiTreeViewBase.h"
#include "UiTreeViewItem.h"

class E3_EXPORT UiTreeView : public UiTreeViewBase
{
public:
	UiTreeView(e3::Element* pParent = nullptr);

	virtual void AddElement(UiTreeViewItem* pItem);

	void SetSelectedItem(UiTreeViewItem* pItem) { mSelectedItem = pItem; }
	UiTreeViewItem* GetSelectedItem() { return mSelectedItem; }
private:
	UiTreeViewItem* mSelectedItem = nullptr;
};

#endif // UiTreeView_H_

