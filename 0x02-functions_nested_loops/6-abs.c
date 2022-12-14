#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute of an integer
 * @n: the int to check
 * Return: the absolute of a given interger
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
