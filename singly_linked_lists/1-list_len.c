#include "lists.h"
#include <stddef.h>

size_t
list_len(const list_t *h)
{
	size_t n = 0;
	list_t *nex;

	if (!h)
		return (0);
	nex = h->next;
	while (nex)
	{
		n++;
		h = h->next;
		nex = h->next;
	}
	n++;
	return (n);
}
