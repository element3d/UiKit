#include "UiDropDownButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownButtonBase::UiDropDownButtonBase(e3::Element* pParent)
	: e3::Dropdown(pParent)
{
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetBorderRadius(4);
        this->SetHeight("30dp");
        this->SetPadding("11dp");
        this->SetPaddingRight("7dp");
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
    mUnderline = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mUnderline);
        mUnderline->SetLeft(0);
        mUnderline->SetRight(0);
        mUnderline->SetBottom(0);
        mUnderline->SetPositionType((e3::EPositionType)1);
        mUnderline->SetBackgroundColor(UiColor::Primary);
        mUnderline->SetHeight("2dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetPositionType((e3::EPositionType)1);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
        mIconCont->SetMarginLeft("14dp");
        mIconCont->SetScaling((e3::EScaling)1);
        mIconCont->SetPadding("4dp");
        mIconCont->SetAspectRatio(1.000000);
        mIconCont->SetBorderRadius(4);
        mIconCont->SetBackgroundColor(UiColor::Primary);
        mIcon = new UiIcon();
        mIconCont->AddElement(mIcon);
        mIcon->SetWidth("10dp");
        mIcon->SetHeight("10dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetCharcode(59149);

}
