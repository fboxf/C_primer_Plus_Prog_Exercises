/* Question 5 */
#include <stdio.h>

int main (void){
	float seconds_in_a_year = 3.156e7;
	int age;

	printf("Enter your age in years:");
	scanf("%d", &age);

	printf("Your age in seconds is approximately %e\n", 
			seconds_in_a_year * age);

	return 0;
}
