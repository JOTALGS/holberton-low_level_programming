#include "lists.h"
#include <stdlib.h>

void
free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
	free(head);
}
