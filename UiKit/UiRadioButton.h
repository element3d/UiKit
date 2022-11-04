
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
	virtual bool OnMouseDown(e3::MouseEvent* pEvent) override;
	virtual bool OnMouseUp(e3::MouseEvent* pEvent) override;
	virtual void OnMouseEnter(e3::MouseEvent* pEvent) override;
	virtual void OnMouseLeave(e3::MouseEvent* pEvent) override;

private:
	void _SetMacOSStyles();
	std::string mGroup;
	static std::map<std::string, std::vector<UiRadioButton*>> sRadioGroups;
	bool mChecked = false;
	e3::Animation* mAnimation = nullptr;
};

#endif // UiRadioButton_H_

