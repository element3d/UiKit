
#ifndef UiTreeViewItemHeader_H_
#define UiTreeViewItemHeader_H_

#include "private/UiTreeViewItemHeaderBase.h"

class UiTreeView;
class E3_EXPORT UiTreeViewItemHeader : public UiTreeViewItemHeaderBase
{
		typedef std::function<void(bool expanded)> OnChangeCallback;

public:
	UiTreeViewItemHeader(e3::Element* pParent = nullptr);

	virtual void Select();
	virtual void Unselect();

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }
	virtual void OnItemChildAdded() {}

protected:
	virtual void OnChange(bool expanded);

protected:
	bool OnClick(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
	bool mExpanded = false;
	OnChangeCallback mOnChangeCallback;
	UiTreeView* mTree = nullptr;

	friend class UiTreeViewItem;
};

#endif // UiTreeViewItemHeader_H_

