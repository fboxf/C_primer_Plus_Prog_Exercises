/* Write a program that reads characters from the standard
 * input to EOF. For each character, hv the program report whether
 * it is a letter. If it is a letter, also report its numerical location 
 * in the alphabet. For example, c and C would both be letter 3.
 * Incorporate a function that takes a character as an argument and
 * returns the numerical location if the character is a letter,
 * returns -1 otherwise */
#include <stdio.h> 
#include <ctype.h>
int check_character (char);

int main (void) 
{
	char ch;
	int start_alphabet;
	
	while ((ch = getchar()) != EOF)
	{
		check_character(ch);
	}

	return 0;
}

int check_character (char current)
{
	if (isalpha(current))
	{
		if (islower(current))
		{
			printf("%c is a letter, position %d\n", current, current - 96);
		}
		else if (isupper(current))
			printf("%c is a letter, position %d\n", current, current - 64);
	}
	else
	{
		printf("-1\n"); 		
	}	
}

