#include "UiTextBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTextBase::UiTextBase(e3::Element* pParent)
	: e3::Text(pParent)
{
        this->SetFontSize("14dp");
        this->SetFont(_s(UiKit/fonts/SegoeUIVF.ttf));
        this->SetTextColor(glm::vec4(50, 50, 50, 255));

}
