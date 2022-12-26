
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
	void _SetWindowsStyles();
  void _SetMacOSStyles();
	void _SetMaterialStyles();

private:
	glm::vec4 mColor;
};

#endif // UiButtonDefault_H_

