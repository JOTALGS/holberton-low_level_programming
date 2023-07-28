#include <stdlib.h>
#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (0);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (ptr)
		ptr->prev = temp;
	*head = temp;
	return (temp);
}
