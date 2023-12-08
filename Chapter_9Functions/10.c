#include <stdio.h>
void to_binary(unsigned long n, int x);

int main (void){
	unsigned long number;
	int number_base;

	printf("Enter an integer (q to quit):\n");
	scanf("%lu",&number);

	printf("Enter a number between 2 and 10:\n");
	scanf("%d",&number_base);

	to_binary(number, number_base);
	printf("\nDone.\n");

	return 0;
}

void to_binary(unsigned long n, int x){
	int r;
	r = n % x;
	if (n >= x)
		to_binary(n / x, x);

	if (r == 0)
		putchar('0');
	else if (r == 1)
		putchar('1');
	else if (r == 2)
		putchar('2');
	else if (r == 3)
		putchar('3');
	else if (r == 4)
		putchar('4');
	else if (r == 5)
		putchar('5');
	else if (r == 6)
		putchar('6');
	else if (r == 7)
		putchar('7');
	else if (r == 8)
		putchar('8');
	else if (r == 9)
		putchar('9');

	return;
}
