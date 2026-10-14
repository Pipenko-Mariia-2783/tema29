#include "B.h"

B::B(int b1)
{
	this->b1 = b1;
}

void B::show_B() const
{
	cout << "B: " << b1 << endl;
}

B2::B2(int b2)
{
	this->b2 = b2;
}

void B2::show_B2() const
{
	cout << "B2: " << b2 << endl;
}

B3::B3(int b3)
{
	this->b3 = b3;
}

void B3::show_B3() const
{
	cout << "B3: " << b3 << endl;
}

D1::D1(int d1, int a, int b, int c):B(a),B2(b),B3(c)
{
	this->d1 = d1;
}


void D1::show_D1() const
{
	show_B();
	show_B2();
	show_B3();
	cout << "D1: " << d1 << endl;
}
