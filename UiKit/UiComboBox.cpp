#include "UiComboBox.h"

UiComboBox::UiComboBox(e3::Element* pParent)
	: UiComboBoxBase(pParent)
{
	SetOnLoadCallback([this](){
		if (GetBody()) GetBody()->SetWidth(GetGeometry().width);
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
	pBody->SetWidth(GetGeometry().width);
}