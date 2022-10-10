#include "UiTreeViewItemHeaderDefaultBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderDefaultBase::UiTreeViewItemHeaderDefaultBase(e3::Element* pParent)
	: UiTreeViewItemHeaderMini(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mText = new UiText();
        AddElement(mText);

}
