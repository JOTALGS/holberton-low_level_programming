#include "hash_tables.h"
#include <stdio.h>

void
hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	if (ht)
	{
	printf("{");
	n = 0;
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			n = 1;
		}
	}
	printf("}\n");
	}
}
