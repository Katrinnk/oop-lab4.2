#include "KvadrRiv.h"
KvadrRiv::KvadrRiv(void)
{}
KvadrRiv::KvadrRiv(int a, int b, int c) :Base(a, b)
{
	this->c = c;
}
KvadrRiv::~KvadrRiv(void)
{}
bool KvadrRiv::Koreni()
{
	return getB() * getB() - 4 * getA() * c >= 0;
}