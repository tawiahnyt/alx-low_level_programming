#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of array
 *
 * @n: number of elements of array to be printed
 *
 * @a: the array to print
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[i];

		if (i < n - 1)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d", j);
		}
	}
	printf("\n");
}
