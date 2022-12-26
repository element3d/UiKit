
#ifndef UiTreeViewItemHeaderMini_H_
#define UiTreeViewItemHeaderMini_H_

#include "private/UiTreeViewItemHeaderMiniBase.h"

enum Ui 
{
	UiLeft,
  UiRight
};

class E3_EXPORT UiTreeViewItemHeaderMini : public UiTreeViewItemHeaderMiniBase
{
public:
	UiTreeViewItemHeaderMini(e3::Element* pParent = nullptr);

	void SetIndicatorPosition(int ePosition);

	virtual void OnChange(bool expanded) override;
	virtual void OnItemChildAdded() override;

	virtual void Select() override;
	virtual void Unselect() override;

	bool OnClick(e3::MouseEvent* pE);

	virtual void AddElement(e3::Element* pElement) override;

	void OnMouseEnter(e3::MouseEvent* pE);
	void OnMouseLeave(e3::MouseEvent* pE);

private:
	int mIndicatorPosition = UiLeft;
};

#endif // UiTreeViewItemHeaderMini_H_

