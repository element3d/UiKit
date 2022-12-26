#include "UiKit.h"
#include "UiColor.h"

EUiKitDesign UiKit::sOs = EUiKitDesign::Windows;

void UiKit::SetDesign(EUiKitDesign os)
{
	sOs = os;
	if (os == EUiKitDesign::Apple)
	  UiColor::Primary = glm::vec4(0, 122, 255, 255);
	else if (os == EUiKitDesign::Material)
	  UiColor::Primary = glm::vec4(96, 0, 238, 255);
}

EUiKitDesign UiKit::GetDesign()
{
  return sOs;
}
