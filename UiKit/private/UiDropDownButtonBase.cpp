#include "UiDropDownButtonBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiDropDownButtonBase::UiDropDownButtonBase(e3::Element* pParent)
	: e3::Dropdown(pParent)
{
        this->SetBorderSize("1dp");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetBorderRadius(4);
        this->SetPadding("14dp");
        this->SetPaddingTop("7dp");
        this->SetPaddingBottom("7dp");
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetPositionType((e3::EPositionType)1);
        mHover->SetTop(0);
        mHover->SetLeft(0);
        mHover->SetBottom(0);
        mHover->SetRight(0);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("14dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetCharcode(59149);

}
