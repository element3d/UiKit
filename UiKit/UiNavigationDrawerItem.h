
#ifndef UiNavigationDrawerItem_H_
#define UiNavigationDrawerItem_H_

#include "private/UiNavigationDrawerItemBase.h"

class UiNavigationDrawer;
class E3_EXPORT UiNavigationDrawerItem : public UiNavigationDrawerItemBase
{
public:
	UiNavigationDrawerItem(e3::Element* pParent = nullptr);

	void OnItemChildAdded();

	void SetIcon(const std::string charcode);
	void SetTitle(const std::string title);

	void Select();
	void Unselect();

	virtual void AddElement(e3::Element* pElement) override;
	virtual void AddElement(UiNavigationDrawerItem* pChild);

	void SetNavigationDrawer(UiNavigationDrawer* pDrawer);

	bool IsExpanded() { return mExpanded; }

protected:
	bool OnClick(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
	void _AnimatedExpand();
	void _AnimatedCollapse(bool hideChildCont = true);

private:
	friend class UiNavigationDrawer;
	UiNavigationDrawer* mDrawer = nullptr;
	bool mExpanded = false;
	e3::Element* mMenu = nullptr;
	e3::Connection mConn;
	e3::Animation* mAnimation = nullptr;
	float mChildContHeight = 0;
	
};

#endif // UiNavigationDrawerItem_H_

