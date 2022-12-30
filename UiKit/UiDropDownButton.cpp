#include "UiDropDownButton.h"
#include "UiKit.h"

UiDropDownButton::UiDropDownButton(e3::Element* pParent)
	: UiDropDownButtonBase(pParent)
{

  EUiKitDesign os = UiKit::GetDesign();
  switch (os)
  {
  case EUiKitDesign::Apple:
		_SetMacOSStyles();
		break;
		case EUiKitDesign::Material:
		SetBorderRadius(0);
		SetBorderSize(0);
		SetBackgroundColor("#f5f5f5");
		mIconCont->SetBackgroundColor(glm::vec4(0));
		SetHeight("36dp");
		break;
  default:
		RemoveElement(mUnderline);
		mIconCont->SetBackgroundColor(glm::vec4(0));
	break;
  }
}

void UiDropDownButton::AddElement(e3::Element* pElement)
{
	mContent->AddElement(pElement);
}

void UiDropDownButton::AddElement(UiDropDownBody* pBody)
{
	SetBody(pBody);
}

void UiDropDownButton::Expand()
{
	UiDropDownButtonBase::Expand();

	auto bg = GetBody()->GetGeometry();
	auto g = GetGeometry();

	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this, g, bg](float v){
			GetBody()->SetOpacity(v);
			GetBody()->SetTranslation(glm::vec3(g.width / 2 - bg.width / 2, v * e3::Dim("6dp"), 0));

		}, [](){
		
		});
}

void UiDropDownButton::OnMouseEnter(e3::MouseEvent* pE)
{
	UiDropDownButtonBase::OnMouseEnter(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.0173 * 255));
}

void UiDropDownButton::OnMouseLeave(e3::MouseEvent* pE)
{
	UiDropDownButtonBase::OnMouseLeave(pE);
	mHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}

void UiDropDownButton::_SetMacOSStyles()
{
  
  {
	SetBackgroundColor(glm::vec4(255));
	SetBorderSize(1);
	SetBorderColor(glm::vec4(0, 0, 0, 0.12 * 255));
//	mText->SetTextColor(glm::vec4(50, 50, 50, 255));
	mIcon->SetColor(glm::vec4(255));
	e3::ShadowParams sh;
	sh.BlurSize = 2;
	sh.Color = glm::vec4(150, 150, 150, 255);
	sh.Opacity = 1;
	sh.Offset = glm::vec2(0, 1);
	SetShadow(sh);
  }
  SetHeight("25dp");
  SetPaddingRight("4dp");
  SetPaddingLeft("8dp");
  mIconCont->SetMarginLeft("8dp");
	RemoveElement(mUnderline);
  SetBorderRadius(e3::Dim("6dp"));

}