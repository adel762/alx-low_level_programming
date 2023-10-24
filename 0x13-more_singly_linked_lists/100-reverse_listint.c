#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = prev;
		prev = *head;
		*head = n;
	}

	*head = prev;

	return (*head);
}
