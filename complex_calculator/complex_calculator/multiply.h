#pragma once
#include"dataStructure.h"
class multiply
{
private:
	complex data;
public:
	multiply(double x, double y);
	pair<double, double> calculate(multiply data);
};