#pragma once
#include "Triangle.h"

class RectTriangle : public Triangle
{
public:
	RectTriangle(int a, int b, int c, int A, int B, int C);
	std::string get_name();
};

