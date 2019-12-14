#pragma once
#include"dataStructure.h"
class Minus
{
private:
	complex data;
public:
	Minus(pair<double,double> x);
	pair<double, double> calculate(Minus data);
};