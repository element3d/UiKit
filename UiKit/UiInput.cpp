#include "UiInput.h"
#include "UiKit.h"

UiInput::UiInput(e3::Element* pParent)
	: UiInputBase(pParent)
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
		SetBackgroundColor(glm::vec4(33, 33, 33, 0.08 * 255));
		mUnderline->SetBackgroundColor(glm::vec4(0, 0, 0, 0.6 * 255));
		mUnderline->SetHeight("2dp");
		SetFontSize("16dp");
		SetHeight("48dp");
		SetBorderSize(0);
		break;
	default:
		break;
	}

}
