#include "stdafx.h"
#include <iostream>

void lesson2();
void printA();
void printB();
void printAB();

void lesson2()
{
	std::cout << "Starting main" << std::endl;
	printAB();
	std::cout << "Ending main" << std::endl;
}

void printA()
{
	std::cout << "A" << std::endl;
}

void printB()
{
	std::cout << "B" << std::endl;
}

void printAB()
{
	printA();
	printB();
}
