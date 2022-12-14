#include "UiTreeViewItemHeaderMiniBase.h"

#include <e3/ViewFactory.h>
#include "UiKitValues.h"

UiTreeViewItemHeaderMiniBase::UiTreeViewItemHeaderMiniBase(e3::Element* pParent)
	: UiTreeViewItemHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("26dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)0);
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("3dp");
        mSelection->SetBorderRadius(0.5);
        mSelection->SetHeight("16dp");
        mSelection->SetBackgroundColor(UiColor::Primary);
        mSelection->SetPositionType((e3::EPositionType)1);
        mSelection->SetLeft("0dp");
        mSelection->SetVisibility((e3::EVisibility)1);
        mIcon = new UiIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("16dp");
        mIcon->SetMarginRight("16dp");
        mIcon->SetWidth("8dp");
        mIcon->SetHeight("8dp");
        mIcon->SetColor(glm::vec4(50, 50, 50, 255));
        mIcon->SetCharcode(59149);
    mContainer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContainer);
        mContainer->SetAlignItemsHor((e3::EAlignment)0);
        mContainer->SetWidth("100%");
        mContainer->SetHeight("100%");
        mContainer->SetMarginLeft("16dp");
        mContainer->SetScaling((e3::EScaling)1);

}
