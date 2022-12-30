#include "Main2.h"
#include "UiNavigationDrawerItem.h"

Main2::Main2(e3::Element* pParent)
	: Main2Base(pParent)
{
	UiNavigationDrawerItem* ii = new UiNavigationDrawerItem();
	mDrawer->AddElement(ii);
	for (int i = 0; i < 10; ++i)
	{
	
	UiNavigationDrawerItem* aa = new UiNavigationDrawerItem();
	ii->AddElement(aa);
	}
}
