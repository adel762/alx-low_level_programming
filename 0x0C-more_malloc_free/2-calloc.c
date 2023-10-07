#include "main.h"
#include <stdlid.h>

/**
 * _memset - fills
 * @s: char1
 * @b: char2
 * @n: int number
 *
 * Return: 0 or 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - memory
 * @nmemb: int1
 * @size: int2
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, numemb * size);

	return (p);
}
