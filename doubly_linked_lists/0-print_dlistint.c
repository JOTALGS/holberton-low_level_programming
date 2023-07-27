#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t
print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t ct = 0;

	node = h;
	while (node->next)
	{
		printf("%d\n", node->n);
		node = node->next;
		ct++;
	}
	printf("%d\n", node->n);
	ct++;
	return (ct);
}
