
#ifndef UiRadioButton_H_
#define UiRadioButton_H_

#include "private/UiRadioButtonBase.h"
#include "UiColor.h"
#include <map>

class E3_EXPORT UiRadioButton : public UiRadioButtonBase
{
public:
	UiRadioButton(e3::Element* pParent = nullptr);
	
	void SetGroup(const std::string& group);
	std::string GetGroup();

	void Check();
	void UnCheck();

	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
	std::string mGroup;
	static std::map<std::string, std::vector<UiRadioButton*>> sRadioGroups;
};

#endif // UiRadioButton_H_

