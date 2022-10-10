#include "UiTreeViewItemHeaderBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderBase::UiTreeViewItemHeaderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetBorderRadius(6);

}
