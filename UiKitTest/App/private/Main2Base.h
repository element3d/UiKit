
#ifndef __Main2Base_H__
#define __Main2Base_H__

#include <e3/ViewFactory.h>


class Main2Base : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    Main2Base(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mDrawer = nullptr;


};

#endif // __Main2Base_H__

