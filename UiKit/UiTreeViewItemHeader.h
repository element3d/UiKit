
#ifndef UiTreeViewItemHeader_H_
#define UiTreeViewItemHeader_H_

#include "private/UiTreeViewItemHeaderBase.h"

class E3_EXPORT UiTreeViewItemHeader : public UiTreeViewItemHeaderBase
{
		typedef std::function<void(bool expanded)> OnChangeCallback;

public:
	UiTreeViewItemHeader(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }
	virtual void OnItemChildAdded() {}

protected:
	virtual void OnChange(bool expanded);

private:
	bool mExpanded = false;
	OnChangeCallback mOnChangeCallback;
};

#endif // UiTreeViewItemHeader_H_

