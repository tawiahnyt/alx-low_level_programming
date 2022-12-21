#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first sting to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they are equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return s1[i] - s2[i];
}
