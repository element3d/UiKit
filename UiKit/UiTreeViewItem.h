
#ifndef UiTreeViewItem_H_
#define UiTreeViewItem_H_

#include "private/UiTreeViewItemBase.h"
#include "UiTreeViewItemHeader.h"

class UiTreeView;
class E3_EXPORT UiTreeViewItem : public UiTreeViewItemBase
{
	friend class UiTreeView;
public:
	UiTreeViewItem(e3::Element* pParent = nullptr);

	void SetTreeIndex(int index);

	virtual void AddElement(UiTreeViewItem* pItem);
	virtual void AddElement(UiTreeViewItemHeader* pHeader);

	virtual void Select();
	virtual void Unselect();

	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	int mTreeIndex = 0;
	UiTreeView* mTree = nullptr;
	std::vector<UiTreeViewItem*> mItems;
	bool mExpanded = false;
	UiTreeViewItemHeader* mHeaderItem = nullptr;

};

#endif // UiTreeViewItem_H_

