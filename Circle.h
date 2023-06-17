#pragma once

#include "Shape.h"

using namespace std;

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

class Circle : public Shape {
private:
	float radius;
	float PI;

public:
	Circle();
	Circle(char* col, float rad);
	~Circle();

	float GetRadius();

	void SetRadius(float rad);
	void Show(void);

	float Perimeter(void);
	float Area(void);
	float OverallDimension(void);

};
#endif