/*
* Filename: Shape.h
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: Defines the Shape class as a base class for different shapes. Provides functions to get and set the name and color of a shape.
*/

#pragma once

#include <string>

#ifndef __SHAPE_H__
#define __SHAPE_H__


class Shape {
protected:
	// Variables
	char* name;
	char* colour;

public:
	// Default constructor
	Shape();
	Shape(char* shape_name, char* shape_colour);

	// Get the name of the shape
	char* GetName(void);

	// Get the colour of the shape
	char* GetColour(void);

	// Set the name of the shape
	void SetName(char* newName);

	// Set the colour of the shape
	void SetColour(char* newColour);

	// Calculate the perimeter of the shape (virtual function)
	virtual float Perimeter(void);

	// Calculate the area of the shape (virtual function)
	virtual float Area(void);

	// Calculate the overall dimension of the shape (virtual function)
	virtual float OverallDimension(void);
};
#endif