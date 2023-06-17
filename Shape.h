#pragma once

#include <string>

#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
protected:
	char* name;
	char* colour;

public:
	Shape();
	Shape(char* shape_name, char* shape_colour);


	char* GetName(void);
	char* GetColour(void);

	void SetName(char* newName);
	void SetColour(char* newColour);

	virtual float Perimeter(void);
	virtual float Area(void);
	virtual float OverallDimension(void);
};
#endif