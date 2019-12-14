#include"control.h"
calculator::calculator(double a1, double a2, double b1, double b2)
{
	this->a1 = a1;
	this->a2 = a2;
	this->b1 = b1;
	this->b2 = b2;
}
void calculator::circulation()
{
	pair<double, double> res1,res2,res3,res4;
	res1 = Plus(make_pair(a1, a2)).calculate(Plus(make_pair(b1, b2)));
	res2 = Minus(a1, a2).calculate(Minus(b1, b2));
	res3 = multiply(a1, a2).calculate(multiply(b1, b2));
	res4 = divide(a1, a2).calculate(divide(b1, b2));

}