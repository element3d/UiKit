#include "UiMenuBar.h"
#include <e3/Application.h>
#include "UiKit.h"

UiMenuBar::UiMenuBar(e3::Element* pParent)
	: UiMenuBarBase(pParent)
{
	SignalOnMouseLeave.Connect([this](e3::MouseEvent* pEvent){
		if (mShowFlyout) return;

		if (mHover) RemoveElement(mHover);
		mHover = nullptr;
	});

	mFlyout = new e3::Element();
	mFlyout->SetWidth("100dp");
	mFlyout->SetBackgroundColor(glm::vec4(247, 247, 247, 255));
	mFlyout->SetPaddingLeft("4dp");
	mFlyout->SetPaddingRight("4dp");
	mFlyout->SetPadding("4dp");
	mFlyout->SetBorderRadius(7);
	mFlyout->SetOrientation(e3::EOrientation::Vertical);
	mFlyout->SetPositionType(e3::EPositionType::Absolute);
	mFlyout->SetLeft(0);
	mFlyout->SetTop(0);

	auto des = UiKit::GetDesign();
	switch (des)
	{
	case EUiKitDesign::Windows:
	  break;
	case EUiKitDesign::Apple:
	  break;
	case EUiKitDesign::Material:
	  mFlyout->SetBorderRadius(0);
	  mFlyout->SetPaddingLeft("0dp");
	  mFlyout->SetPaddingRight("0dp");
	  break;
	default:
	  break;
	}
	

	e3::ShadowParams s;
	s.BlurSize = 10;
	s.Color = glm::vec4(50, 50, 50, 255);
	s.Opacity = 1;
	s.Offset = (glm::vec2(0, 5));
	mFlyout->SetShadow(s);

	mConn = GetApplication()->GetElement()->SignalOnMouseDown.Connect([this](e3::MouseEvent* pEvent){
		if (!mFlyout->GetGeometry().contains(glm::vec2(pEvent->GetX(), pEvent->GetY())))
		{
			GetApplication()->GetElement()->RemoveElement(mFlyout, false);
			mShowFlyout = false;
			if (mHover) RemoveElement(mHover);
			mHover = nullptr;
		}

		});
}

UiMenuBar::~UiMenuBar()
{
	GetApplication()->GetElement()->SignalOnMouseDown.Disconnect(mConn);
}

void UiMenuBar::AddElement(UiMenu* pMenu)
{
	e3::Element::AddElement(pMenu);

	pMenu->SignalOnMouseEnter.Connect([this, pMenu](e3::MouseEvent* pEvent){
		if (mHover) RemoveElement(mHover);

		e3::Element* pHover = new e3::Element();
		auto mg = pMenu->GetGeometry();
		pHover->SetWidth(mg.width + e3::Dim("16dp"));
		pHover->SetHeight("32dp");
		pHover->SetBackgroundColor(glm::vec4(0, 0, 0, 0.03 * 255));
		auto des = UiKit::GetDesign();
		if (des == EUiKitDesign::Material) pHover->SetBorderRadius(0);
		else pHover->SetBorderRadius(5);
		pHover->SetPositionType(e3::EPositionType::Absolute);
		InsertElement(0, pHover);

		auto g = GetGeometry();
		auto hg = pHover->GetGeometry();
		pHover->SetLeft(mg.x - g.x + mg.width / 2 - hg.width / 2);
		mHover = pHover;
		mHover->UpdateGeometry();
		if (mShowFlyout) _ShowFlyout(pMenu);
	});

	pMenu->SignalOnMouseLeave.Connect([this, pMenu](e3::MouseEvent* pEvent){
		if (mShowFlyout) return;

		if (mHover) RemoveElement(mHover);
		mHover = nullptr;
	});

	pMenu->SignalOnMouseDown.Connect([this, pMenu](e3::MouseEvent* pEvent){
		if (!pMenu->GetItems().size()) return;

		pEvent->Stop();
		_ShowFlyout(pMenu);
	});
}

void UiMenuBar::_ShowFlyout(UiMenu* pMenu)
{
		if (!pMenu->GetItems().size()) 
		{
			GetApplication()->GetElement()->RemoveElement(mFlyout, false);
			mShowFlyout = false;
			return;
		}

		mFlyout->RemoveAllElements(false);

		for (auto pItem : pMenu->GetItems())
		{
			mFlyout->AddElement(pItem);
		}
	
		if (!mShowFlyout)
			GetApplication()->GetElement()->AddElement(mFlyout);

		mShowFlyout = true;
		auto mg = pMenu->GetGeometry();
		auto fg = mFlyout->GetGeometry();
		auto hg = mHover->GetGeometry();
		mFlyout->SetTranslation(glm::vec3(/*mg.x + mg.width / 2 - fg.width / 2*/hg.x, /*mg.y + mg.height + e3::Dim("20dp")*/hg.y + hg.height , 0));
}