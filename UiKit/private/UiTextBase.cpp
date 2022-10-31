#include "UiTextBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTextBase::UiTextBase(e3::Element* pParent)
	: e3::Text(pParent)
{
        this->SetFontSize("14dp");
        this->SetFontFamily("Segoe");
        this->SetTextColor(glm::vec4(60, 60, 60, 255));

}
