#include "lists.h"
#include <stdio.h>
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
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%U] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
