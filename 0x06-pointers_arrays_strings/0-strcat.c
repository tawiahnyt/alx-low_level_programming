#include "main.h"

/**
 * _strcat - appends two strings together
 *
 * @dest: a pointer pointing to a string
 *
 * @src: another pointer pointing to another string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		for (j = 0; src[j] != '\0'; i++, j++)
		{
			dest[i] = src[j];
		}

	dest[i] = '\0';
}

