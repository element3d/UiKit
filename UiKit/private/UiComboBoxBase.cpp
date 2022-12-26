#include "UiComboBoxBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxBase::UiComboBoxBase(e3::Element* pParent)
	: e3::Dropdown(pParent)
{
    mHeader = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHeader);

}
