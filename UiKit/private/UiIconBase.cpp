#include "UiIconBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiIconBase::UiIconBase(e3::Element* pParent)
	: e3::FontIcon(pParent)
{
        this->SetWidth("16dp");
        this->SetAspectRatio(1.000000);
        this->SetColor(glm::vec4(50, 50, 50, 255));
        this->SetFont(_s(UiKit/fonts/SegMDL2.ttf));

}
