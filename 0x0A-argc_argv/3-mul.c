#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples two numbers.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Return, always successful
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else 
	{
		printf("Error\ni");
	}

	return (0);
}
