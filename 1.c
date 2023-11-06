/* Devise a function min(x,y) that returns
 * the smaller of two double values. Test with
 * a simlpe driver */
#include <stdio.h>
double min(double, double);

int main (void)
{
	double val1, val2;
	val1 = 23.545;
	val2 = 345.434;

	printf("The minimum value of %f and %f is %f\n", 
			val1, val2, min(val1, val2));

	return 0;
}

double min(double x, double y)
{	
	x, y;

	if (x < y)
	{
		return x;
	} 
	else if (y < x)
	{
		return y;
	} 
	else
	{
		printf("Both numbers are the same\n");
		return 0;
	}
}

