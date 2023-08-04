#include "hash_tables.h"
#include <stdlib.h>

hash_table_t
*hash_table_create(unsigned long int size)
{
	hash_table_t *nd;

	nd = malloc(sizeof(hash_table_t));
	if (!nd)
		return (NULL);
	nd->size = size;
	return (nd);
}
