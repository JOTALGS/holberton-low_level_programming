#include "lists.h"

int
sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->next)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
	}
	return (sum);
}
