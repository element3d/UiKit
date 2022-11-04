#include "UiComboBox.h"
#include "UiComboBoxHeaderDefault.h"

UiComboBox::UiComboBox(e3::Element* pParent)
	: UiComboBoxBase(pParent)
{
	SetOnLoadCallback([this](){
		if (GetBody())
		{
			GetBody()->SetWidth(GetGeometry().width);
			if (mBody->GetNumChildren())
			{
				UiComboBoxHeaderDefault* pDefHead = dynamic_cast<UiComboBoxHeaderDefault*>(mComboHeader);
				if (pDefHead)
				{
					UiComboBoxItem* pItem = dynamic_cast<UiComboBoxItem*>(mBody->GetChildren()[0]);
					pDefHead->SetTitle(pItem->GetTitle());
				}
			}
		}
	});
}

void UiComboBox::AddElement(UiComboBoxHeader* pHeader)
{
	mComboHeader = pHeader;
	mHeader->AddElement(pHeader);
}

void UiComboBox::AddElement(UiComboBoxBody* pBody)
{
	SetBody(pBody);
	mBody = pBody;
	pBody->SetWidth(GetGeometry().width);
	pBody->SetOnChangeCallback([this](int index, UiComboBoxItem* pItem) {
		UiComboBoxHeaderDefault* pDefHead = dynamic_cast<UiComboBoxHeaderDefault*>(mComboHeader);
		if (pDefHead)
		{
			pDefHead->SetTitle(pItem->GetTitle());
		}
		if (mOnChangeCallback) mOnChangeCallback(index, pItem);
		Collapse();
	});
}

void UiComboBox::Expand()
{
	UiComboBoxBase::Expand();
	if (mBody->GetSelectedItem())
	{
		auto g = GetGeometry();
//		mBody->UpdateGeometry();
		mBody->GetSelectedItem()->UpdateGeometry();
		auto ig = mBody->GetSelectedItem()->GetGeometry();
		float y = ig.y;
		if (ig.y == 0) y = g.y; 
		float dy = g.y + g.height / 2 - (y + ig.height / 2);
		 GetBody()->SetTranslation(glm::vec3(0, mBody->GetGeometry().y - ig.y - g.height, 0));
		//GetBody()->SetTop(dy);
	}
		// GetBody()->SetTranslation(glm::vec3(50, -50, 0));

	printf("asdf");
}