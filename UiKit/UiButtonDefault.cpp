#include "UiButtonDefault.h"
#include "UiColor.h"

UiButtonDefault::UiButtonDefault(e3::Element* pParent)
	: UiButtonDefaultBase(pParent)
{
	mColor = glm::vec4(250, 250, 250, 255);
}

void UiButtonDefault::SetText(const std::string& text)
{
	mText->SetText(text);
}

void UiButtonDefault::SetStyle(UiStyle style)
{
	if (style == UiAccent)
	{
		mColor = UiColor::Primary;
		SetBackgroundColor(UiColor::Primary);
		mText->SetTextColor(glm::vec4(255));
		SetBorderSize(0);
	}
}