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
	res2 = Minus(make_pair(a1, a2)).calculate(Minus(make_pair(b1, b2)));
	res3 = multiply(make_pair(a1, a2)).calculate(multiply(make_pair(a1, a2)));
	res4 = divide(make_pair(a1, a2)).calculate(divide(make_pair(b1, b2)));

}