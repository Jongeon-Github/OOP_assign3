#include <string>
#include <iostream>
#include "Shape.h"

#define MAX_NAME 50
#define MAX_COLOUR 10

#pragma warning(disable:4996)

using namespace std;

Shape::Shape() {
	name = new char[MAX_NAME];
	strcpy_s(name, MAX_NAME, "Unknown");
	colour = new char[MAX_COLOUR];
	strcpy_s(colour, MAX_COLOUR, "undefined");
};

Shape::Shape(char* shape_name, char* shape_colour) {
	name = shape_name;
	colour = shape_colour;
};


char* Shape::GetName(void) {
	return name;
};


char* Shape::GetColour(void) {
	return colour;
};


void Shape::SetName(char* newName) {
	const char* names[] = { "Unknown", "Circle", "Square" };
	int num = sizeof(names) / sizeof(names[0]);
	for (int i = 0; i < num; i++) {
		if (strcmp(names[i], newName) == 0) {
			name = newName;
		}
	}
};


void Shape::SetColour(char* newColour) {
	const char* colours[] = { "undefined", "red", "green", "blue", "yellow", "purple", "pink", "orange" };
	int num = sizeof(colours) / sizeof(colours[0]);
	for (int i = 0; i < num; i++) {
		if (strcmp(colours[i], newColour) == 0) {
			colour = newColour;
		}
		else {
			strncpy(colour, newColour, MAX_COLOUR);
		}
	}
};


float Shape::Perimeter(void) {
	float temp = 0.00;
	return temp;
};

float Shape::Area(void) {
	float temp = 0.00;
	return temp;
};
float Shape::OverallDimension(void) {
	float temp = 0.00;
	return temp;
};