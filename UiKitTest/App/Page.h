
#ifndef Page_H_
#define Page_H_

#include "private/PageBase.h"

enum class EPageType
{
	AllControls,
	Button,
	CheckBox,
	ComboBox,
	RadioButton,
	Slider,
	Switch,
	ListView,
	TreeView,
	Expander
};

class E3_EXPORT Page : public PageBase
{
public:
	Page(e3::Element* pParent = nullptr);

	EPageType GetType() { return mType; }

protected:
	EPageType mType;
};

#endif // Page_H_
