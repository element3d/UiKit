
#ifndef UiMenu_H_
#define UiMenu_H_

#include "private/UiMenuBase.h"
#include "UiMenuItem.h"

class E3_EXPORT UiMenu : public UiMenuBase
{
public:
	UiMenu(e3::Element* pParent = nullptr);

	void AddElement(UiMenuItem* pItem);
	std::vector<UiMenuItem*> GetItems();
private:
	std::vector<UiMenuItem*> mItems;
};

#endif // UiMenu_H_

