#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle() {
	radius = 0.00;
	PI = 3.1415926;
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
	cout << "Shape Information" << endl;
	cout << "Name: " << GetName() << endl;
	cout << "Colour: " << GetColour() << endl;
	cout << "Radius: " << GetRadius() << " cm" << endl;
	cout << "Circumference: " << Perimeter() << " cm" << endl;
	cout << "Area: " << Area() << " square cm" << endl;
};

float Circle::Perimeter(void) {
	return 2 * PI * GetRadius();
};

float Circle::Area(void) {
	return 2 * PI;
};

float Circle::OverallDimension(void) {
	return 2 * GetRadius();
};