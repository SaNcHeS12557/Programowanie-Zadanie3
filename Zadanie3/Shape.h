#pragma once
class Shape
{
protected: 
	int height;
	int width;
	string color;
	char symbol;

	int** tab;

	int x, y;
public:
	void Print();
	virtual void Fill() = 0;
	void Alloc();
	
	Shape(int h, char s, string c);

	static int counter;
};

