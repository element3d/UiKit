#include "UiNavigationDrawerItemBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiNavigationDrawerItemBase::UiNavigationDrawerItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetOrientation((e3::EOrientation)1);
    mHeader = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHeader);
        mHeader->SetWidth("100%");
        mHeader->SetHeight("40dp");
        mHeader->SetBorderRadius(6);
        mHeader->SetAlignItemsHor((e3::EAlignment)0);
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mHeader->AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetHeight("16dp");
        mSelection->SetBackgroundColor(UiColor::Primary);
        mSelection->SetPositionType((e3::EPositionType)1);
        mSelection->SetLeft("0dp");
        mSelection->SetVisibility((e3::EVisibility)1);
    mContainer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mHeader->AddElement(mContainer);
        mContainer->SetAlignItemsHor((e3::EAlignment)0);
        mContainer->SetWidth("100%");
        mContainer->SetHeight("100%");
        mContainer->SetMarginLeft("12dp");
        mContainer->SetScaling((e3::EScaling)1);
        mIcon = new UiIcon();
        mContainer->AddElement(mIcon);
        mIcon->SetWidth("16dp");
        mIcon->SetAspectRatio(1.000000);
        mTitle = new UiText();
        mContainer->AddElement(mTitle);
        mTitle->SetMarginLeft("20dp");
        mTitle->SetText("Title");
        mExpandIcon = e3::ViewFactory::CreateFontIcon();
        mHeader->AddElement(mExpandIcon);
        mExpandIcon->SetMarginLeft("16dp");
        mExpandIcon->SetMarginRight("16dp");
        mExpandIcon->SetWidth("8dp");
        mExpandIcon->SetHeight("8dp");
        mExpandIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mExpandIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mExpandIcon->SetCharcode(57361);
    mChildCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mChildCont);
        mChildCont->SetOrientation((e3::EOrientation)1);
        mChildCont->SetWidth("100%");

}
