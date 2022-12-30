#include "WidgetSection.h"
#include "UiKit.h"

WidgetSection::WidgetSection(e3::Element* pParent)
	: WidgetSectionBase(pParent)
{
	auto des = UiKit::GetDesign();

	switch (des)
	{
	case EUiKitDesign::Windows:
		break;
	case EUiKitDesign::Apple:
		break;
	case EUiKitDesign::Material:
		SetBorderRadius(0);
		SetBackgroundColor(glm::vec4(255));
		break;
	default:
		break;
	}
}
