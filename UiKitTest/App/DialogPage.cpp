#include "DialogPage.h"
#include "ContentDialog.h"

DialogPage::DialogPage(e3::Element* pParent)
	: DialogPageBase(pParent)
{
  mShowDialogButton->SignalOnClick.Connect([this](e3::MouseEvent*) {
	if (!mDialog) mDialog = new ContentDialog();
	mDialog->Show();
  });
}
