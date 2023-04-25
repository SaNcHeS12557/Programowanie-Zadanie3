// Zadanie3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

#include "Shape.h"
#include "Rectangle.h"

int Shape::counter = 0;

int main()
{
	int i, j;

	Rectangle p(5, 7, '*', "green");

	p.Print();
	cout << endl;
}
