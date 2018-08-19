#include "stdafx.h"
#include <iostream>

void lesson3();
void doPrint();

void lesson3()
{
	std::cout << "Starting main()" << std::endl;
	doPrint();
	std::cout << "Ending main()" << std::endl;
}

void doPrint()
{
	std::cout << "In doPrint()" << std::endl;
}