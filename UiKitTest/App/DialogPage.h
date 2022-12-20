
#ifndef DialogPage_H_
#define DialogPage_H_

#include "private/DialogPageBase.h"
#include "ContentDialog.h"

class E3_EXPORT DialogPage : public DialogPageBase
{
public:
	DialogPage(e3::Element* pParent = nullptr);

private:
  ContentDialog* mDialog = nullptr;
};

#endif // DialogPage_H_

