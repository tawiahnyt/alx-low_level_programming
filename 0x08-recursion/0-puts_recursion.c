#include "main.h"

/**
 * _puts_recursion - prints strings followed by a newline
 *
 * @s: the string to return
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
