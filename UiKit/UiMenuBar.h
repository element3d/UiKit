
#ifndef UiMenuBar_H_
#define UiMenuBar_H_

#include "private/UiMenuBarBase.h"
#include "UiMenu.h"

class E3_EXPORT UiMenuBar : public UiMenuBarBase
{
public:
	UiMenuBar(e3::Element* pParent = nullptr);
	~UiMenuBar();

	void AddElement(UiMenu* pMenu);

private:
	void _ShowFlyout(UiMenu* pMenu);

private:
	e3::Element* mHover = nullptr;
	bool mShowFlyout = false;
	e3::Element* mFlyout = nullptr;
	e3::Connection mConn;
};

#endif // UiMenuBar_H_

