#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

}
