
#ifndef UiListViewItem_H_
#define UiListViewItem_H_

#include "private/UiListViewItemBase.h"

class UiListView;
class E3_EXPORT UiListViewItem : public UiListViewItemBase
{
public:
	UiListViewItem(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void Select();
	void Unselect();

protected:
	bool OnClick(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
	friend class UiListView;
	UiListView* mListView = nullptr;
	e3::Animation* mAnimation = nullptr;
};

#endif // UiListViewItem_H_

