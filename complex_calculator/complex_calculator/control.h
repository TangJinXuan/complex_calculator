#pragma once
#include"divide.h"
#include"extraCalculation.h"
#include"minus.h"
#include"multiply.h"
#include"plus.h"
class calculator
{
private:
	double a1, a2, b1, b2;
public:
	calculator(double a1,double a2,double b1,double b2);
	void circulation();
};