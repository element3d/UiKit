
#ifndef UiAppBarButton_H_
#define UiAppBarButton_H_

#include "private/UiAppBarButtonBase.h"

class E3_EXPORT UiAppBarButton : public UiAppBarButtonBase
{
public:
	UiAppBarButton(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& charcode);

	virtual void OnMouseEnter(e3::MouseEvent*) override;
	virtual void OnMouseLeave(e3::MouseEvent*) override;
};

#endif // UiAppBarButton_H_

