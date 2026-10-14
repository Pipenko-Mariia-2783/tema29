#pragma once
#include <iostream>
using namespace std;
class B
{
	int b1;
public:
	B(int b1);
	void show_B()const;
};

class B2 {
	int b2;
public:
	B2(int b2);
	void show_B2()const;
};

class B3 {
	int b3;
public:
	B3(int b3);
	void show_B3()const;
};

class D1:public B,
	public B2,
	private B3
{
	int d1;
public:
	D1(int d1,int a, int b, int c);
	void show_D1()const;
};

class D2:
	public D1
{
	int d2;
public:
	D2(int d2, int d1, int a, int b, int c);
	void show_D2()const;
};
