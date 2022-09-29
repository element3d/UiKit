
#ifndef UiTreeViewItem_H_
#define UiTreeViewItem_H_

#include "private/UiTreeViewItemBase.h"

class UiTreeView;
class E3_EXPORT UiTreeViewItem : public UiTreeViewItemBase
{
	friend class UiTreeView;
public:
	UiTreeViewItem(e3::Element* pParent = nullptr);

	void SetText(const std::string& text, bool translate = false);

	void SetTreeIndex(int index);

	virtual void AddElement(UiTreeViewItem* pItem);

private:
	int mTreeIndex = 0;
	UiTreeView* mTree = nullptr;
	std::vector<UiTreeViewItem*> mItems;
};

#endif // UiTreeViewItem_H_

