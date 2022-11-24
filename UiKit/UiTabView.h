
#ifndef UiTabView_H_
#define UiTabView_H_

#include "private/UiTabViewBase.h"
#include "UiTabViewPage.h"

class E3_EXPORT UiTabView : public UiTabViewBase
{
public:
	UiTabView(e3::Element* pParent = nullptr);

	void AddElement(UiTabViewPage* pPage);

private:
	int _GetTabIndex(UiTab* pTab);

private:
	int mCurrentTab = 0;
	std::vector<UiTabViewPage*> mPages;
};

#endif // UiTabView_H_

