#pragma once
#include<utility>
using namespace std;
struct complex
{
	double real;
	double image;
	complex(pair<double,double> t)
	{
		real = t.first;
		image = t.second;
	}
};