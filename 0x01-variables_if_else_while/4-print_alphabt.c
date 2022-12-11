#include <stdio.h>

/**
 * main - Entry point
 *
 * return: A;ways 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}

	return (0);
}
