// CwiczeniaLearnCPP1.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

void lesson1()
{


	int x = getValueFromUser();
	int y = getValueFromUser();

	std::cout << "x + y = " << x + y << std::endl;

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

void lesson2()
{


	std::cout << "Starting main" << std::endl;
	printAB();
	std::cout << "Ending main" << std::endl;
}

void doPrint()
{
	std::cout << "In doPrint()" << std::endl;
}

void lesson3()
{
	std::cout << "Starting main()" << std::endl;

	doPrint();

	std::cout << "Ending main()" << std::endl;
}

void lesson4()
{
	
}

int main()
{
	//lesson1();
	//lesson2();
	//lesson3();
	lesson4();

	std::getchar();
	return 0;
}
