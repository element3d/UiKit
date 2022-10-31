#include "UiText.h"
#include <e3/Typography.h>

bool UiText::sFontsInitialized = false;

UiText::UiText(e3::Element* pParent)
	: UiTextBase(pParent)
{
	if (!sFontsInitialized)
	{
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Normal, "UiKit/fonts/Segoe/segoeui.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Bold, "UiKit/fonts/Segoe/segoeuib.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Light, "UiKit/fonts/Segoe/segoeuil.ttf");
		sFontsInitialized = true;
	}
}
