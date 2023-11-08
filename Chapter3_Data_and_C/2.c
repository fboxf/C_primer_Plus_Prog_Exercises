#include <stdio.h>

int main (void){
	int ch;

	printf("Enter an ASCII value (0 - 127):");
	scanf("%d", &ch);

	printf("That code corresponds to %c\n", ch); 

	return 0;
}

