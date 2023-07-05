/*
* Filename: Shape.cpp
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: This file implements the Shape class with functions for managing shape properties and calculations.
*/

#include <string>
#include <iostream>
#include "Shape.h"

#define MAX_NAME 50
#define MAX_COLOUR 10

#pragma warning(disable:4996)

using namespace std;


/*
* Function: Shape()
* Description: Initialize the values.
* Parameters: None
* Return : None
*/
Shape::Shape() {
	name = new char[MAX_NAME];
	strcpy_s(name, MAX_NAME, "Unknown");
	colour = new char[MAX_COLOUR];
	strcpy_s(colour, MAX_COLOUR, "undefined");
};


/*
* Function: Shape(char* shape_name, char* shape_colour)
* Description: Initializes the shape with the specified name and colour.
* Parameters:
*    - char* shape_name: The name of the shape.
*    - char* shape_colour: The colour of the shape.
* Return: None
*/
Shape::Shape(char* shape_name, char* shape_colour) {
	name = new char[strlen(shape_name) + 1]; // 수정
	strcpy(name, shape_name);
	colour = new char[strlen(shape_colour) + 1]; // 수정
	strcpy(colour, shape_colour);

//	name = shape_name;
//	colour = shape_colour;
};


/*
* Function: GetName(void)
* Description: Retrieves the name of the shape.
* Parameters: None
* Return: char* - The name of the shape.
*/
char const* Shape::GetName(void) {
	return name;
};


/*
* Function: GetColour(void)
* Description: Retrieves the colour of the shape.
* Parameters: None
* Return: char* - The colour of the shape.
*/
char const* Shape::GetColour(void) {
	return colour;
};


/*
* Function: SetName(char* newName)
* Description: Sets the name of the shape to the specified value if it matches predefined names.
* Parameters:
*    - char const* newName: The new name to set for the shape.
* Return: None
*/
void Shape::SetName(char const* newName) {
	char const* names[] = { "Unknown", "Circle", "Square" };
	int num = sizeof(names) / sizeof(names[0]);
	for (int i = 0; i < num; i++) {
		if (strcmp(names[i], newName) == 0) {
			delete[] name;
			name = new char[strlen(newName + 1)];
			strcpy_s(name, MAX_NAME, newName);
		}
	}
};


/*
* Function: SetColour(char* newColour)
* Description: Sets the colour of the shape to the specified value if it matches predefined colours. Otherwise, copies the new colour value.
* Parameters:
*    - char const* newColour: The new colour to set for the shape.
* Return: None
*/
void Shape::SetColour(char const* newColour) {
	char const* colours[] = { "undefined", "red", "green", "blue", "yellow", "purple", "pink", "orange" };
	int num = sizeof(colours) / sizeof(colours[0]);
	bool colourMatch = false;
	for (int i = 0; i < num; i++) {
		if (strcmp(colours[i], newColour) == 0) {
			strcpy_s(colour, MAX_NAME, newColour);
			colourMatch = true;
			break;
		}
	}
	if (colourMatch == false) {
		delete[] colour;
		colour = new char[strlen("unknown")+1];
		strcpy_s(colour, MAX_COLOUR, "unknown");
	}
};


/*
* Function: Perimeter(void)
* Description: Calculates and returns the perimeter of the shape.
* Parameters: None
* Return: float - The perimeter of the shape.
*/
float Shape::Perimeter(void) {
	float temp = 0.00;
	return temp;
};


/*
* Function: Area(void)
* Description: Calculates and returns the area of the shape.
* Parameters: None
* Return: float - The area of the shape.
*/
float Shape::Area(void) {
	float temp = 0.00;
	return temp;
};


/*
* Function: OverallDimension(void)
* Description: Calculates and returns the overall dimension of the shape.
* Parameters: None
* Return: float - The overall dimension of the shape.
*/
float Shape::OverallDimension(void) {
	float temp = 0.00;
	return temp;
};