
#ifndef UiKit_H_
#define UiKit_H_

#include "private/UiKitBase.h"

enum class UiKitOS 
{
	Windows,
	MacOS,
	Linux
};

class E3_EXPORT UiKit
{
public:
	static void SetOS(UiKitOS os);
	static UiKitOS GetOS();

private:
	static UiKitOS sOs;
};

#endif // UiKit_H_

