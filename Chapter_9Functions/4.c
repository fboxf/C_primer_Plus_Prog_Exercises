/* The harmonic mean of two numbers is 
 * obtained by taking the inverses of the 
 * two numbers, averaging them, and taking 
 * the inverse of the result. Write a function
 * that takes two double arguments and returns 
 * the harmonic mean of the two numbers */
#include <stdio.h>
double calc_harmonic_mean (double, double);

int main (void)
{
	double num1,num2;
	num1 = 23.2345;
	num2 = 1.9845;

	printf("The harmonic mean of %f and %f is:\n", num1, num2);
	printf("%f", calc_harmonic_mean(num1, num2));
	return 0;
}

double calc_harmonic_mean (double harm1, double harm2)

	double harmonic_mean;
	
	harmonic_mean = 1 / (( 1 / harm1 + 1 / harm2) / 2);
	return harmonic_mean;
	
}
