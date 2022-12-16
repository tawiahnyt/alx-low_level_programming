#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @i: int to be looped through
 * Return: prints 0 to 9
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		_putchar(i);
	}
	_putchar('\n');

}
