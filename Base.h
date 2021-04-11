#pragma once
class Base
{

	int a, b;
public:
	Base(void);
	Base(int a, int b);

	int getA() { return a; }
	int getB() { return b; }

	~Base(void);
};

