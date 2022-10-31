
#ifndef UiButtonDefault_H_
#define UiButtonDefault_H_

#include "private/UiButtonDefaultBase.h"

class E3_EXPORT UiButtonDefault : public UiButtonDefaultBase
{
public:
	UiButtonDefault(e3::Element* pParent = nullptr);

	void SetText(const std::string& text);
	void SetStyle(UiStyle style);

private:
	UiStyle mStyle = UiDefault;
	glm::vec4 mColor;
};

#endif // UiButtonDefault_H_

