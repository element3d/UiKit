#include "UiText.h"
#include <e3/Typography.h>

bool UiText::sFontsInitialized = false;

UiText::UiText(e3::Element* pParent)
	: UiTextBase(pParent)
{
	if (!sFontsInitialized)
	{
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Normal, "UiKit/fonts/SegoeUI/segoeui.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Bold, "UiKit/fonts/SegoeUI/segoeuib.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Light, "UiKit/fonts/SegoeUI/segoeuil.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Black, "UiKit/fonts/SegoeUI/seguibl.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::SemiBold, "UiKit/fonts/SegoeUI/seguisb.ttf");
	//	e3::Typography::AddFont("SegoeUI", e3::EFontStyle::Normal, "UiKit/fonts/SegoeUI/segoeui.ttf");
//		e3::Typography::AddFont("SegoeUI", e3::EFontStyle::Bold, "UiKit/fonts/SegoeUI/segoeuib.ttf");
		//e3::Typography::AddFont("SegoeUI", e3::EFontStyle::Light, "UiKit/fonts/SegoeUI/segoeuil.ttf");
		sFontsInitialized = true;
	}
}
