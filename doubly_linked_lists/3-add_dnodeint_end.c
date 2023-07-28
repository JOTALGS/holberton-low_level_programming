#include <stdlib.h>
#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (0);
	temp->n = n;
	temp->next = NULL;
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
        	ptr->next = temp;
		temp->prev = ptr;
	}
	else
	{
		temp->prev = NULL;
		*head = temp;
	}
	return (temp);
}
