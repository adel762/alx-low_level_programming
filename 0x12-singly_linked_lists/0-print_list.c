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

/**
 * print_list - print all ele
 * @h: pointer
 *
 * Return: int
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", h->string(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}

	return (x);
}
