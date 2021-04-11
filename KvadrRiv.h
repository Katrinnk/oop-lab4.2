#pragma once
#include "Base.h"
class KvadrRiv:public Base
{
	int c;
public:
	KvadrRiv(void);
	KvadrRiv(int a, int b, int c);
	~KvadrRiv(void);

	virtual bool Koreni();
};

