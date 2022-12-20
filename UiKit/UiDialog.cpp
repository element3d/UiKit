#include "UiDialog.h"
#include <e3/Application.h>

UiDialog::UiDialog(e3::Element* pParent)
	: UiDialogBase(pParent)
{

}

void UiDialog::Show()
{
  if (!mBg)
  {
	mBg = new e3::Element();
	mBg->SetWidth("100%");
	mBg->SetHeight("100%");
	mBg->SetPositionType(e3::EPositionType::Absolute);
	mBg->SetBackgroundColor(glm::vec4(0, 0, 0, 100));
	mBg->SetStopEvents(1);
	mBg->AddElement(this);

	mBg->SignalOnClick.Connect([this](e3::MouseEvent*) {
	  Hide();
	});
  }
  GetApplication()->GetElement()->AddElement(mBg);

}

void UiDialog::Hide()
{
  GetApplication()->GetElement()->RemoveElement(mBg, false);
}