/* Devise a function chline (ch,i,j) that 
 * prints the requested character in columns i 
 * through j. Test it in a simple driver. */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "header.h"

int main (void)
{
	char ch[] = "And now for something completely different..";

	chline(ch, 3,15);

	return 0;
}
