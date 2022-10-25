
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <UiAppBarButton.h>
#include <UiText.h>
#include <UiNavigationDrawer.h>
#include <UiInput.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	UiAppBarButton* mBackButton = nullptr;
UiNavigationDrawer* mDrawer = nullptr;
UiAppBarButton* mDrawerToggle = nullptr;
UiAppBarButton* mSearch = nullptr;
e3::Element* mSearchInput = nullptr;
e3::Element* mRouter = nullptr;


};

#endif // __MainBase_H__

