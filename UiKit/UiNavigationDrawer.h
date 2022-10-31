
#ifndef UiNavigationDrawer_H_
#define UiNavigationDrawer_H_

#include "private/UiNavigationDrawerBase.h"
#include "UiNavigationDrawerItem.h"

class E3_EXPORT UiNavigationDrawer : public UiNavigationDrawerBase
{
	//typedef std::function<void(bool minimized)> OnToggleCallback;
public:
	e3::Signal<void(bool minimized)> SignalOnToggle;
public:
	UiNavigationDrawer(e3::Element* pParent = nullptr);

	void Toggle();
	// void AddOnToggleCallback(OnToggleCallback c) { mOnToggleCallbacks.push_back(c); }

	using e3::Element::AddElement;
	void AddElement(UiNavigationDrawerItem* pItem);
	using e3::Element::InsertElement;
	void InsertElement(int index, UiNavigationDrawerItem* pItem);

	bool IsMinimized();

private:
	friend class UiNavigationDrawerItem;
	bool mExpanded = true;
	UiNavigationDrawerItem* mSelectedItem = nullptr;
	// std::vector<OnToggleCallback> mOnToggleCallbacks;
};

#endif // UiNavigationDrawer_H_

