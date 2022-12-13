#include "main.h"

/**
 * print_alphabet_10x - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(i);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
