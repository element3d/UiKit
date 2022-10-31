
#ifndef Main_H_
#define Main_H_

#include "private/MainBase.h"
#include "Page.h"

struct _MenuItem
{
	EPageType PageType;
	std::string Title;
};

struct _Menu
{
	std::string Title;
	std::string Icon;
	EPageType PageType;
	std::vector<_MenuItem> Children;
};

class E3_EXPORT Main : public MainBase
{
public:
	Main(e3::Element* pParent = nullptr);

	void Navigate(EPageType page);
	void Navigate(Page* pPage);
	void NavigateBack();

private:
	// e3::Element* mPrevPage = nullptr;
	std::vector<Page*> mHistory;
	std::vector<_Menu> mMenus;
};

#endif // Main_H_

