#include "ContentDialogBase.h"

#include <e3/ViewFactory.h>
#include "UiKitTestValues.h"

ContentDialogBase::ContentDialogBase(e3::Element* pParent)
	: UiDialog(pParent)
{
                UiText* pCustomView1 = new UiText();
        AddElement(pCustomView1);
        pCustomView1->SetText("Dialog");

}
