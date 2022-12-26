
#ifndef UiKit_H_
#define UiKit_H_

#include "private/UiKitBase.h"

enum class EUiKitDesign 
{
	Windows,
	Apple,
	Material
};

class E3_EXPORT UiKit
{
public:
	static void SetDesign(EUiKitDesign os);
	static EUiKitDesign GetDesign();

private:
	static EUiKitDesign sOs;
};

#endif // UiKit_H_

