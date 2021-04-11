#pragma once
#include "Base.h"
class LinRiv:public Base
{
public:
	LinRiv(void);
	LinRiv(int a, int b);
	~LinRiv(void);

	virtual bool Koreni();
};

