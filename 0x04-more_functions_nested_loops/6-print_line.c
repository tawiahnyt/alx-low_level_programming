#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n - number to times the charecter _ should be printed
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
