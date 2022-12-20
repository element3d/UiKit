
#ifndef Page_H_
#define Page_H_

#include "private/PageBase.h"

enum class EPageType
{
	AllControls,
	BasicInput,
	Collections,
	DateAndTime,
	DialogsAndFlyouts,
	Text,
	Button,
	DropDownButton,
	CheckBox,
	ComboBox,
	RadioButton,
	Slider,
	Switch,
	ListView,
	MenuBar,
	TabView,
	TreeView,
	Expander,
	Input,
	NumberInput,
	CalendarDatePicker,
	Dialog
};

class Main;
class E3_EXPORT Page : public PageBase
{
public:
	Page(e3::Element* pParent = nullptr);

	EPageType GetType() { return mType; }

	void SetMain(Main* pMain) { mMain = pMain; }

protected:
	EPageType mType;
	Main* mMain = nullptr;
};

#endif // Page_H_

