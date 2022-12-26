#include "UiText.h"
#include <e3/Typography.h>
#include "UiKit.h"

bool UiText::sFontsInitialized = false;

UiText::UiText(e3::Element* pParent)
	: UiTextBase(pParent)
{
	if (!sFontsInitialized)
	{
	  EUiKitDesign os = UiKit::GetDesign();
	  switch (os)
	  {
	  case EUiKitDesign::Apple:
		e3::Typography::AddFont("SF Pro", e3::EFontStyle::Normal, "UiKit/fonts/SFPro/SF-Pro-Display-Regular.ttf");
		e3::Typography::AddFont("SF Pro", e3::EFontStyle::Italic, "UiKit/fonts/SFPro/SF-Pro-Italic.ttf");
		e3::Typography::AddFont("SF Pro", e3::EFontStyle::SemiBold, "UiKit/fonts/SegoeUI/SF-Pro-Display-Semibold.ttf");
		SetFontFamily("SF Pro");
		break;
	  case EUiKitDesign::Material:
		e3::Typography::AddFont("Roboto", e3::EFontStyle::Normal, "UiKit/fonts/Roboto/Roboto-Regular.ttf");
		e3::Typography::AddFont("Roboto", e3::EFontStyle::Italic,   "UiKit/fonts/Roboto/Roboto-Italic.ttf");
		e3::Typography::AddFont("Roboto", e3::EFontStyle::SemiBold, "UiKit/fonts/Roboto/Roboto-Medium.ttf");
		e3::Typography::AddFont("Roboto", e3::EFontStyle::Bold, "UiKit/fonts/Roboto/Roboto-Bold.ttf");

		e3::Typography::AddFont("Montserrat", e3::EFontStyle::Normal, "UiKit/fonts/Montserrat/Montserrat-Regular.ttf");
		e3::Typography::AddFont("Montserrat", e3::EFontStyle::Italic, "UiKit/fonts/Montserrat/Montserrat-Italic.ttf");
		e3::Typography::AddFont("Montserrat", e3::EFontStyle::SemiBold, "UiKit/fonts/Montserrat/Montserrat-Medium.ttf");
		e3::Typography::AddFont("Montserrat", e3::EFontStyle::Bold, "UiKit/fonts/Montserrat/Montserrat-Bold.ttf");
		SetFontFamily("Roboto");
		break;
	  default:
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Normal, "UiKit/fonts/SegoeUI/segoeui.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Bold, "UiKit/fonts/SegoeUI/segoeuib.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Light, "UiKit/fonts/SegoeUI/segoeuil.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::Black, "UiKit/fonts/SegoeUI/seguibl.ttf");
		e3::Typography::AddFont("Segoe", e3::EFontStyle::SemiBold, "UiKit/fonts/SegoeUI/seguisb.ttf");
		SetFontFamily("Segoe");
		break;
	  }
	  sFontsInitialized = true;
	}
}
