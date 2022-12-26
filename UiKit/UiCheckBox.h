
#ifndef UiCheckBox_H_
#define UiCheckBox_H_

#include "private/UiCheckBoxBase.h"
#include "UiColor.h"

enum class E3_EXPORT EUiCheckBoxState
{
	Checked,
	SemiChecked,
	UnChecked
};

class E3_EXPORT UiCheckBox : public UiCheckBoxBase
{
public:
	UiCheckBox(e3::Element* pParent = nullptr);

	void SetIsThreeState(bool isThreeState);
	bool GetIsThreeState();

	void SetGroup(const std::string& group);
	std::string GetGroup();

	virtual bool OnClick(e3::MouseEvent* pEvent) override;

	EUiCheckBoxState GetState() { return mState; }
	void Check();
	void SemiCheck();
	void UnCheck();

	void OnMouseEnter(e3::MouseEvent*);
	void OnMouseLeave(e3::MouseEvent*);

private:
	void _SetMacOSStyles();
	EUiCheckBoxState mState = EUiCheckBoxState::UnChecked;
	bool mIsThreeState = false;

	std::string mGroup;
	static std::map<std::string, std::vector<UiCheckBox*>> sCheckBoxGroups;
};

#endif // UiCheckBox_H_

