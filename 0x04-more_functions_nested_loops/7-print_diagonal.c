#include "main.h"

/**
 * print_diagonal - draws diagonal lines on the termial
 *
 * @n - number of times the character \ should be printed
 */

void print_diagonal(int n)
{   
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
