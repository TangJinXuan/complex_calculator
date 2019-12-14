#pragma once
#include"dataStructure.h"
class Plus
{
private:
	complex data;
public:
	Plus(pair<double, double> x);
	pair<double, double> calculate(Plus data);
};