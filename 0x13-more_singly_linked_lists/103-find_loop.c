#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 *
 * Return: address, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (x && fast && fast->next)
	{
		fast = fast->next->next;
		x = x->next;
		if (fast == x)
		{
			x = head;
			while (x != fast)
			{
				x = x->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
