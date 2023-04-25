#include <iostream>

using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(int h, int w, char s, string c):Shape(h,s,c) {
	cout << "Konstruktor rectangle z paratremami\n";
	width = w;
	Alloc();
	Fill();

}

Rectangle::Rectangle(int h, char s, string c) :Shape(h, s, c) {
	cout << "Konstriktor rectangle z parametrami bez h czyli square\n";
	width = h;
	Alloc();
	Fill();

}