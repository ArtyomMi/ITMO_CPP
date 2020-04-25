#pragma once
#include <math.h>
namespace root
{


int MyRoot(double a, double b, double c, double& x1, double& x2)
{
	int retValue = -1;
	double D = b * b - 4 * a * c;
	if (D > 0) 
	{
		retValue = 1;
		x1 = (-b+sqrt(D))/2*a;
		x2 = (-b-sqrt(D))/2*a;
	}
	else if (D == 0)
	{
		retValue = 0;
		x1 = (-b + sqrt(D)) / 2 * a;
		}
	return retValue;
}
}
