#include "lists.h"

dlistint_t
*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head->next)
		{
			if (index == i)
				return(head);
			else
				head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
