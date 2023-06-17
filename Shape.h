#pragma once

#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
private:
	char* name;
	char* colour;

public:
	Shape();
	Shape(char* shpae_name, char* shpae_colour);
	~Shape();

	char* GetName(void);
	char* GetColour(void);

	void SetName(char* newName);
	void SetColour(char* newColour);

	virtual float Perimeter(void);
	virtual float Area(void);
	virtual float OverallDimension(void);
};
#endif