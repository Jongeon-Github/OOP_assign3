#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Square.h"

using namespace std;

Square::Square() {
	sideLength = 0.00;
};

Square::Square(char* col, float sdlng) {
	SetColour(col);
	SetSideLength(sdlng);
};

Square::~Square() {
	cout << "The square is squished ¡¦" << endl;
};


float Square::GetSideLength(void) {
	return sideLength;
};


void Square::SetSideLength(float sdlng) {
	if (sdlng >= 0.00) {
		sideLength = sdlng;
	}
};


void Show(void);


float Perimeter(void);


float Area(void);


float OverallDimension(void);