
#ifndef MainNavDrawerItem_H_
#define MainNavDrawerItem_H_

#include "private/MainNavDrawerItemBase.h"

class E3_EXPORT MainNavDrawerItem : public MainNavDrawerItemBase
{
public:
	MainNavDrawerItem(e3::Element* pParent = nullptr);

	void SetIcon(const std::string charcode);
	void SetTitle(const std::string title);
};

#endif // MainNavDrawerItem_H_

