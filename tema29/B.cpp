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
