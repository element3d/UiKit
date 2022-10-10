#include "UiComboBoxBodyBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiComboBoxBodyBase::UiComboBoxBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(253, 253, 253, 255));
        this->SetBorderRadius(8);
        this->SetPadding("4dp");
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(200, 200, 200, 255));

}
