#pragma once

#include "Shape.h"

#ifndef __SQUARE_H__
#define __SQUARE_H__


class Square : public Shape {
private:
	float sideLength;

public:
	Square();
	Square(char* col, float sdlng);
	~Square();

	float GetSideLength(void);
	void SetSideLength(float sdlng);
	void Show(void);
	float Perimeter(void);
	float Area(void);
	float OverallDimension(void);

};
#endif