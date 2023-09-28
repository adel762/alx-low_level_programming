#include "main.h"

/**
 * _put_recursion - print
 * @s: char
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(s + 1);
}
