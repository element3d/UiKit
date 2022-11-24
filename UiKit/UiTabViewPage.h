
#ifndef UiTabViewPage_H_
#define UiTabViewPage_H_

#include "private/UiTabViewPageBase.h"

class UiTab;
class E3_EXPORT UiTabViewPage : public UiTabViewPageBase
{
public:
	UiTabViewPage(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title);
	std::string GetTitle();

private:
	friend class UiTabView;
	std::string mTitle;
	UiTab* mTab = nullptr;
};

#endif // UiTabViewPage_H_

