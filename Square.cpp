#include <iostream>
#include <iomanip>
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


void Square::Show(void) {
	cout << endl << "Shape Information" << endl;
	cout << "Name: " << Shape::GetName()<< endl;
	cout << "Colour: " << Shape::GetColour() << endl;
	cout << "Side Length: " << GetSideLength() << " cm" << endl;
	cout << "Perimeter: " << fixed << setprecision(2) << Perimeter() << " cm" << endl;
	cout << "Area: " << Area() << " square cm" << endl;
};


float Square::Perimeter(void) {
	return round((4 * GetSideLength()) * 100.00) / 100.00;
};


float Square::Area(void) {
	return  round((GetSideLength() * 2) * 100.00) / 100.00;
};


float Square::OverallDimension(void) {
	return round((GetSideLength()) * 100.00) / 100.00;
};