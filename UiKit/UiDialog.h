
#ifndef UiDialog_H_
#define UiDialog_H_

#include "private/UiDialogBase.h"

class E3_EXPORT UiDialog : public UiDialogBase
{
public:
	UiDialog(e3::Element* pParent = nullptr);
  
	void Show();
	void Hide();

private:
  e3::Element* mBg = nullptr;
};

#endif // UiDialog_H_

