#include "LinRiv.h"
LinRiv::LinRiv(void)
{}
LinRiv::LinRiv(int a, int b) :Base(a, b)
{}
LinRiv::~LinRiv(void)
{}
bool LinRiv::Koreni()
{
	return getA() != 0;
}
