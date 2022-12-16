#include "main.h"

/**
 * print_most_numbers - prints the number 0-9 except for 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; 1 <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}

	_putchar('\n');

}
