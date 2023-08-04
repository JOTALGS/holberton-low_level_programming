#include "hash_tables.h"
#include <stdlib.h>

hash_table_t
*hash_table_create(unsigned long int size)
{
	hash_table_t *nd;
	hash_node_t **arr;

	nd = malloc(sizeof(hash_table_t));
	if (!nd)
		return (NULL);
	nd->size = size;
	arr = malloc(sizeof(hash_node_t) * size);
	if (!arr)
		return (NULL);
	nd->array = arr;
	return (nd);
}
