#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reverse of a string
 *
 * @s: the string to be printed
 *
 */

void rev_string(char* s)
{
	int len, i;
	char *start, *end, ch;

	len = strlen(s);
	start = s;
	end = s + len - 1;

	for (i = 0; i < (len - 1) / 2; i++) {

		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
}
