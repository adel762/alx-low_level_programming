#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - print
 * @b: int number
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
