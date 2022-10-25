
#ifndef AllControlsPage_H_
#define AllControlsPage_H_

#include "private/AllControlsPageBase.h"

class Main;
class E3_EXPORT AllControlsPage : public AllControlsPageBase
{
public:
	AllControlsPage(e3::Element* pParent = nullptr);
	void SetMain(Main* pMain);

private:
	Main* mMain = nullptr;
};

#endif // AllControlsPage_H_

