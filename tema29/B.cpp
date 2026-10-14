#include "B.h"

B::B(int b1)
{
	this->b1 = b1;
}

void B::show_B() const
{
	cout << "B: " << b1 << endl;
}
