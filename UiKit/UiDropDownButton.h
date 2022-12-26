
#ifndef UiDropDownButton_H_
#define UiDropDownButton_H_

#include "private/UiDropDownButtonBase.h"
#include "UiDropDownBody.h"

class E3_EXPORT UiDropDownButton : public UiDropDownButtonBase
{
public:
	UiDropDownButton(e3::Element* pParent = nullptr);

	using UiDropDownButtonBase::AddElement;
	virtual void AddElement(e3::Element* pElement) override;
	virtual void AddElement(UiDropDownBody* pBody);

	void Expand();

	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
  void _SetMacOSStyles();
};

#endif // UiDropDownButton_H_

