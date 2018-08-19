#include "stdafx.h"
#include <iostream>

void lesson4();
int add(int x, int y);

void lesson4() //1.4d
{
	int a = 4; //a is created and initialized here
	int b = 7; //b is created and initialized here

	//calls function add, a = x, b = y;
	std::cout << add(a, b) << std::endl;
}	//a and b go out of scope and are destroyed here

int add(int x, int y) //x and y are created here
{
	//x and y is vissible in this function only
	return x + y;
} // x and y go out of scope and are destroyed here