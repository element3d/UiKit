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