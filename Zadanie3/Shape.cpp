#include <iostream>

using namespace std;

#include "Shape.h"

void Shape::Print() {
	int i, j;

	cout << color;

	for (j = 0; j < height; j++) {
		for (i = 0; i < width; i++)
			if (tab[j][i]) {
				cout << color;
				cout << symbol;
			}
			else
				cout << ' ';
		cout << endl;
	}

}
