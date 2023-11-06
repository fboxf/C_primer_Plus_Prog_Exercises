#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "header.h"

/* Function to print characters in an array
 * pre:
 * 		ch, i, j defined
 * 		i < j
 * 		i and j are less than strlen(ch) */
int chline (char * ch, int i, int j)
{
	char * foo; // create a pointer to char variable
	foo = ch; // pointer to char variable 'ch' 

	if (is_index_valid (ch, i,j))
	{
		display_characters(ch, i, j);
	}

	return 0;
}

bool is_index_valid(char * ch, int i, int j)
{
	double ch_length = strlen(ch);

	if ((i < ch_length) && (j < ch_length) && (i < j))
	{
		return true;
	}
	else
	{		
		printf("Unable to print characters\n");
		return false;
	}
}

void display_characters (char * ch, int i, int j)
{	
	char * foo; // create a pointer to char variable
	foo = ch; // pointer to char variable 'ch' 

	for (i; i <= j; i++)
	{
		printf("%c", foo[i]);
	}

}

