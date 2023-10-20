#include "lists.h"

/**
 * _putchar- print char
 * @c: char
 * Return: 0 success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
