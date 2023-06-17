/*
* Filename: Circle.h
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description:This header file defines the Circle class, which is derived from the Shape class. It introduces additional member variables and
			  overrides the virtual functions to calculate the perimeter, area, and overall dimension specific to a circle.
*/

#pragma once

#include "Shape.h"

using namespace std;

#ifndef __CIRCLE_H__
#define __CIRCLE_H__


class Circle : public Shape {
private:
	// Variables
	float radius;
	float PI;

public:
	// Default constructor
	Circle();
	Circle(char* col, float rad);
	~Circle();

	// Get the radius of the circle
	float GetRadius(void);

	// Set the radius of the circle
	void SetRadius(float rad);

	// Show information about the circle
	void Show(void);

	// Calculate the perimeter of the circle
	float Perimeter(void);

	// Calculate the area of the circle
	float Area(void);

	// Calculate the overall dimension of the circle
	float OverallDimension(void);
};
#endif