#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t
print_list(const list_t *h)
{
	size_t n = 0;
	unsigned int l;
	char *s;
	list_t *nex;

	nex = h->next;
	while (nex)
	{
		s = h->str;
		l = h->len;
		if (!s)
		{
			s = "(nil)";
			l = 0;
		}
		printf("[%d] %s\n", l, s);
		n++;
		h = h->next;
		nex = h->next;
	}
	s = h->str;
	l = h->len;
	printf("[%d] %s\n", l, s);
	n++;
	return (n);
}
