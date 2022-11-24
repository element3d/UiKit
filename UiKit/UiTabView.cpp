#include "UiTabView.h"
#include "UiTab.h"
#include <e3/Application.h>

UiTabView::UiTabView(e3::Element* pParent)
	: UiTabViewBase(pParent)
{

}

void UiTabView::AddElement(UiTabViewPage* pPage)
{
	UiTab* pTab = new UiTab();
	if (!mPageCont->GetNumChildren())
	{
		pTab->Select();
		mPageCont->AddElement(pPage);
	}
	mPages.push_back(pPage);

	
	pTab->SetTitle(pPage->GetTitle());
	mTabCont->AddElement(pTab);
	//pTab->mPage = pPage;
	pPage->mTab = pTab;

	
	pTab->SignalOnClick.Connect([this, pTab](e3::MouseEvent*){
		int i = _GetTabIndex(pTab);
		 UiTab* pPrevTab = (UiTab*)mTabCont->GetChildren()[mCurrentTab];
		 mPageCont->RemoveElement(mPages[mCurrentTab], false);
		 pPrevTab->UnSelect();
		 UiTab* pTab = (UiTab*)mTabCont->GetChildren()[i];
		 pTab->Select();
		 mCurrentTab = i;
		 mPageCont->AddElement(mPages[mCurrentTab]);

		 auto tg = i == mTabCont->GetNumChildren() - 1 ? mAdd->GetGeometry() : pTab->GetGeometry();
		 auto g = mTabs->GetGeometry();
		 float dx = tg.x + tg.width + mAdd->GetMarginRight() - g.x - g.width;
		 if (dx > 0)
		 {
			  mTabs->Scroll(glm::vec3(-dx, 0, 0));
				printf("asdf");
		 }
		 else if (tg.x < g.x)
		 {
				mTabs->Scroll(glm::vec3(g.x - tg.x, 0, 0));
		 }
	});

	pTab->SignalOnClose.Connect([this, pTab](){
		int i = _GetTabIndex(pTab);
		int ai;
		bool swap = false;
		if (mCurrentTab == i) swap = true;
		if (i == 0)
		{
			ai = i + 1;
			mCurrentTab = 0;
		}
		else 
		{
			ai = i - 1;
			mCurrentTab = i - 1;
		}
	
		if (swap)
		{
			if (mPages.size() > 1)
				mPageCont->AddElement(mPages[ai]);
	
			mPageCont->RemoveElement(mPages[i]);
		}
		mPages.erase(mPages.begin() + i);

		GetApplication()->RunOnUiThread(new e3::Callback<void(void)>([this, pTab](){
				mTabCont->RemoveElement(pTab);
			}));
	});
}

int UiTabView::_GetTabIndex(UiTab* pTab)
{
	int i = -1;
	for (auto pT : mTabCont->GetChildren())
	{
		++i;
		if (pT == pTab) return i;
	}
	return i;
}