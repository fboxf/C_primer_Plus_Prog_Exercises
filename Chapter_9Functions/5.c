/* Write and test a function called larger_of() that replaces
 * the contents of two double variables with the maximum of two values.
 * For example, larger_of(x,y) would reset both x and y to the 
 * larger of the two. */

#include <stdio.h> 

void larger_of (double *, double *); 

int main (void) 
{
	double val1, val2;

	printf("Please enter two numbers, I will\n");
	printf("change their values to the highest");
	printf("number:\n"); 
	scanf("%lf %lf", &val1, &val2);

	/* Transmit the addresses using address of operators */
	larger_of(&val1, &val2);
	printf("The values of val1 and val2 are now:\n"); 	
	printf("%f and %f", val1, val2);

	return 0;
}	

void larger_of (double * x, double * y)
{
	if (*x > *y)
	{
		*y = *x;
	}
	else if (*y > *x)
	{
		*x = *y;
	}
	else 
	{
		*x = *x;
		*y = *y;
	}
	
}
