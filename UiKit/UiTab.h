
#ifndef UiTab_H_
#define UiTab_H_

#include "private/UiTabBase.h"

class UiTabViewPage;
class E3_EXPORT UiTab : public UiTabBase
{
public:
	e3::Signal<void()> SignalOnClose;
public:
	UiTab(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);

	void Select();
	void UnSelect();

	void OnMouseLeave(e3::MouseEvent* pE);
	void OnMouseEnter(e3::MouseEvent* pE);


private:
	friend class UiTabView;
	UiTabViewPage* mPage = nullptr;
	bool mSelected = false;
};

#endif // UiTab_H_

