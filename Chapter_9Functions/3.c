/* Question 3 */
#include <stdio.h>
int print_character (char, int, int);

int main (void)
{
	char ch = 'b';
	int number_across = 10;
	int number_down = 10;

	print_character(ch, number_across, number_down);

	return 0;
}

int print_character (char char_to_print, int x_across, int y_down)
{
	for (int i = 0; i < y_down; i++)
	{
		for (int j = 0; j < x_across; j++)
		{
			printf("%c", char_to_print);
		}
		printf("\n");
	}


	return 0;
}

