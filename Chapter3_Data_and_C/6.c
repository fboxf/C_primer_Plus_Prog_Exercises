/* Question 6 */
#include <stdio.h>

int main (void){
	float quarts;

	// 1 gram of water contains ...
	float water_molecule = 3e-23; // .. molecules
	
	// This many grams in a quart
	float number_of_water_molecules_in_a_quart = 950 / 3e-23;

	printf("Enter an amount of water, in quarts:");
	scanf("%f", &quarts);

	printf("The number of water molecules in %f is %f\n",
			quarts, quarts * number_of_water_molecules_in_a_quart);

	return 0;
}
