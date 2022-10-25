
#ifndef MenuButton_H_
#define MenuButton_H_

#include "private/MenuButtonBase.h"

class E3_EXPORT MenuButton : public MenuButtonBase
{
public:
	MenuButton(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title);
	void SetDesc(const std::string& desc);
	void SetImage(const std::string& image);
};

#endif // MenuButton_H_

