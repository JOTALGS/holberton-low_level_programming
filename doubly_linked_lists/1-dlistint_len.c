#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t
dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t ct = 0;

	if (!h)
		return (0);
	node = h;
	while (node->next)
	{
		node = node->next;
		ct++;
	}
	ct++;
	return (ct);
}
