
#ifndef UiExpanderHeader_H_
#define UiExpanderHeader_H_

#include "private/UiExpanderHeaderBase.h"

class E3_EXPORT UiExpanderHeader : public UiExpanderHeaderBase
{
	typedef std::function<void(bool expanded)> OnChangeCallback;
public:
	UiExpanderHeader(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }

protected:
	virtual void OnChange(bool expanded);

private:
	OnChangeCallback mOnChangeCallback;
	bool mExpanded = false;
};

#endif // UiExpanderHeader_H_

