#include "UiComboBoxBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxBodyBase::UiComboBoxBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));

}
