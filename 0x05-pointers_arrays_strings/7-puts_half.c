#include "main.h"

/**
 * puts_half - prints half of a string followed by a newline
 *
 * @str: string
 *
 */

void puts_half(char *str)
{
	int i, n, length;

	for (length = 0; str[length] != '\0'; length++)
	{

	}

	n = (length - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

}
