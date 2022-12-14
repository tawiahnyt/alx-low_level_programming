#include "main.h"
#include <stdio.h>

/**
 * abs - prints the absolute of an integer
 * @n: the int to check
 * Returns the absolute of a given interger
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
