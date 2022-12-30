#include "Main2Base.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

Main2Base::Main2Base(e3::Element* pParent)
	: e3::Element(pParent)
{
    mDrawer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mDrawer);
        mDrawer->SetOrientation((e3::EOrientation)1);
        mDrawer->SetWidth(200);
        mDrawer->SetHeight("100%");
        mDrawer->SetAlignItemsVer((e3::EAlignment)0);
        mDrawer->SetAlignItemsHor((e3::EAlignment)0);
        mDrawer->SetPadding("4dp");

}
