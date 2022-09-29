#include "UiKit.h"

UiKitOS UiKit::sOs = UiKitOS::Windows;

void UiKit::SetOS(UiKitOS os)
{
	sOs = os;
}

UiKitOS UiKit::GetOS()
{
	return sOs;
}
