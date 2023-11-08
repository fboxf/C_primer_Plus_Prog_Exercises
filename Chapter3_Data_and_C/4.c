/* Q 4 */
#include <stdio.h>

int main (void){
	float choose_number;

	printf("Enter a floating-point value:");
	scanf("%f", &choose_number);

	printf("fixed-point notation: %f\n", choose_number);
	printf("exponential notation: %e\n", choose_number);

	return 0;
}

