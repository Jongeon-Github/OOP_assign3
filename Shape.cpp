#include <stdio.h>
#include <string>
#include <cmath>
#include "Shape.h"

#define MAX_NAME 50
#define MAX_COLOUR 10

using namespace std;


Shape::Shape() {
	name = new char[MAX_NAME];
	strcpy(name, "Unknown");
	colour = new char[MAX_COLOUR];
	strcpy(colour, "undefined");
};


Shape::Shape(char* shpae_name, char* shpae_colour) {
	SetName(shpae_name);
	SetColour(shpae_colour);
};


Shape::~Shape() {
}


char* Shape::GetName() {
	return name;
}


char* Shape::GetColour() {
	return colour;
}


void Shape::SetName(char* newName) {
	const char* names[] = {"Unknow", "Circle", "Square"};
	if (newName == nullptr) {
		strcpy(name, "Unknown");
	}
	else {
		strcpy(name, newName);
		for (int i = 0; i < sizeof(names); i++) {
			if (name == names[i]) {
				strcpy(name, names[i]);
			}
			else {
				strcpy(name, names[0]);
			}
		}
	}
}


void Shape::SetColour( char* newColours) {
	const char* colours[] = { "undefined", "red", "green", "blue", "yellow", "purple", "pink", "orange"};
	if (newColours == nullptr) {
		strcpy(colour, "undefined");
	}
	else {
		strcpy(colour, newColours);
		for (int i = 0; i < sizeof(colour); i++) {
			if (colour == colours[i]) {
				strcpy(colour, colours[i]);
			}
			else {
				strcpy(colour, colours[0]);
			}
		}
	}
}