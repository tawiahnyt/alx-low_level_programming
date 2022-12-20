#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reverse of a string
 *
 * @s: the string to be reversed
 */

void rev_string(char* s)
{
	int len, count, end;
	char beg;

	len = 0;

	while (s[len] != '\0')
		len++;
	len--;

	for (count = 0; count <= len / 2; count++)
	{
		beg = s[count];
		end = s[len - count];
		s[count] = end;
		s[len - count] = beg;
	}
}
