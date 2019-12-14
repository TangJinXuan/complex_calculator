#pragma once
#include"dataStructure.h"
class Minus
{
private:
	complex data;
public:
	
	Minus(double x, double y);
	pair<double, double> calculate(Minus data);
};