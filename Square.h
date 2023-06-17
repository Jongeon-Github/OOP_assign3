/*
* Filename: Square.h
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: This header file defines the Square class, which is derived from the Shape class. It introduces additional member variables and
			  overrides the virtual functions to calculate the perimeter, area, and overall dimension specific to a sqiare.
*/

#pragma once

#include "Shape.h"

#ifndef __SQUARE_H__
#define __SQUARE_H__


class Square : public Shape {
private:
	// Variables
	float sideLength;

public:
	// Default constructor
	Square();
	Square(char* col, float sdlng);
	~Square();

	// Get the side length of the square
	float GetSideLength(void);

	// Set the side length of the square
	void SetSideLength(float sdlng);

	// Show information about the square
	void Show(void);

	// Calculate the perimeter of the square
	float Perimeter(void);

	// Calculate the area of the square
	float Area(void);

	// Calculate the overall dimension of the square
	float OverallDimension(void);
};
#endif