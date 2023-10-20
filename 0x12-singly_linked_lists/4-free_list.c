#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->string);
		free(head);
		head = temp;
	}
}
