#include "stdafx.h"
#include <iostream>

void lesson1();
int getValueFromUser();

void lesson1()
{
	int x = getValueFromUser();
	int y = getValueFromUser();

	std::cout << "x + y = " << x + y << std::endl;
}

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}