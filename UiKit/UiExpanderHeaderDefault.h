
#ifndef UiExpanderHeaderDefault_H_
#define UiExpanderHeaderDefault_H_

#include "private/UiExpanderHeaderDefaultBase.h"

class E3_EXPORT UiExpanderHeaderDefault : public UiExpanderHeaderDefaultBase
{
public:
	UiExpanderHeaderDefault(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title);

protected:
	virtual void OnChange(bool expanded) override;
};

#endif // UiExpanderHeaderDefault_H_

