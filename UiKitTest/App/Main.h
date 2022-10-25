
#ifndef Main_H_
#define Main_H_

#include "private/MainBase.h"

class E3_EXPORT Main : public MainBase
{
public:
	Main(e3::Element* pParent = nullptr);

	void Navigate(e3::Element* pPage);
	void NavigateBack();

private:
	e3::Element* mPrevPage = nullptr;
};

#endif // Main_H_

