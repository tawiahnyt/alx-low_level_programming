#include <main.h>

/**
 * print_line - prints a straight line in the terminal
 * @n - number to times the charecter _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n == 0)
		{
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
