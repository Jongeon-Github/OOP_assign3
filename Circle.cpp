#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle() {
	radius = 0.00;
	PI = (float)3.1415926;
};

Circle::Circle(char* col, float rad) {
	SetColour(col);
	SetRadius(rad);
};

Circle::~Circle() {
	cout << "The circle is broken ¡¦" << endl;
};

float Circle::GetRadius() {
	return radius;
};

void Circle::SetRadius(float rad) {
	if (rad >= 0.00) {
		radius = rad;
	}
};

void Circle::Show(void) {
	cout << endl << "Shape Information" << endl;
	cout << "Name: " << name << endl;
	cout << "Colour: " << colour << endl;
	cout << "Radius: " << GetRadius() << " cm" << endl;
	cout << "Circumference: " << fixed << setprecision(2) << Perimeter() << " cm" << endl;
	cout << "Area: " << Area() << " square cm" << endl;
};

float Circle::Perimeter(void) {
	return 2 * PI * GetRadius();
};

float Circle::Area(void) {
	return PI * GetRadius() * 2;
};

float Circle::OverallDimension(void) {
	return 2 * GetRadius();
};