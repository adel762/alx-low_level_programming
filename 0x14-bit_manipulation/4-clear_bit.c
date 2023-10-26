#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value
 * @n: pointer
 * @index: index position
 * Return: 1 if or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int p;

	if (index > 64)
		return (-1);
	p = index;
	for (i = 1; p > 0; i *= 2, p--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
