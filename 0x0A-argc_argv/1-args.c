#include <stdio.h>

/**
 * main - prints numbers of arguments passed into it
 *
 * @argc: argument counter
 * @argv: argumetn vector
 *
 * Retrun: Return, always successful
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
