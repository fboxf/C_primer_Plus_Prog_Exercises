// Question 6 
// Write and test a function that takes the addresses of three double variables as arguments
// and that moves the value of the smallest variable into the first variable, the middle value
// to the second variable, and the largest value into the third variable.
#include <stdio.h> 
void move_variables (double * ,double *, double *);
void swap_variables (double *, double *);
int main (void) 
{
	double a,b,c;
	a = 3245;
	b = 540;
	c = 23;
	move_variables(&a, &b, &c);
	printf("a = %lf and\nb = %lf\nc= %lf\n", a, b, c); 	

	return 0;
}

void move_variables (double * a, double * b, double * c)
{
	double temp;
	if (*a > *c)
		swap_variables(a, c);
	if (*a > *b)
		swap_variables(a, b);
	if (*b > *c)
		swap_variables(b, c);
}

void swap_variables (double * swap1, double * swap2)
{
	double temp;
	temp = *swap2;
	*swap2 = *swap1;
	*swap1 = temp;
}
