#pragma once
#include"dataStructure.h"
class Plus
{
private:
	complex data;
public:
	Plus(double x, double y);
	pair<double, double> calculate(Plus data);
};