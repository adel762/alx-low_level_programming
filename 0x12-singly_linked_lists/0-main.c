#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * string - int
 * @s: char
 *
 * Return: int
 */
int string(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
