#include "lists.h"
/**
 * print_listint_safe - function that print
 * @head: pointer
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = NULL;
	const listint_t *l_n = NULL;
	size_t c = 0;
	size_t new_n;

	t = head;
	while (t)
	{
		printf("[%p] %d\n", (void *)t, t->n);
		c++;
		t = t->next;
		l_n = head;
		new_n = 0;
		while (new_n < c)
		{
			if (t == l_n)
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				return (c);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
