// CwiczeniaLearnCPP1.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

// added forward declaration 1.7
void lesson1();
void lesson2();
void lesson3();
void lesson4();

int getValueFromUser();
void printA();
void printB();
void printAB();
void doPrint();
int add(int x, int y);


int main()
{
	//lesson1();
	//lesson2();
	//lesson3();
	lesson4();

	std::getchar();
	return 0;
}

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

int add(int x, int y) //x and y are created here
{
	//x and y is vissible in this function only
	return x + y;
} // x and y go out of scope and are destroyed here

void lesson4() //1.4d
{
	int a = 4; //a is created and initialized here
	int b = 7; //b is created and initialized here

	//calls function add, a = x, b = y;
	std::cout << add(a, b) << std::endl; 
}	//a and b go out of scope and are destroyed here
