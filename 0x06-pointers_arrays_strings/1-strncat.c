#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 *
 * Return: a pointer to the resulting string dset
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return dest;
}
