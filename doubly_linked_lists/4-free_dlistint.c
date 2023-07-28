#include "lists.h"
#include <stdlib.h>

void
free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head->next)
		{
			temp = head;
			free(head);
			head = temp->next;
		}
		free(head);
	}
}
