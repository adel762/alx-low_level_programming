#include "lists.h"

/**
* print_list - function to print the linked list
* @h: the start pointer
* Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	int i = 0;
	list_t const *x = h;

	if (h == NULL)
		return (0);
	while (x != NULL)
	{
		if (!x->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", x->len, x->str);
		}
		x = x->next;
		i++;
	}
	return (i);
}
