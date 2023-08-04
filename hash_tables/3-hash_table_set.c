#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int ind;

	if (!key)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	ind = key_index((unsigned char *)key, ht->size);
	if (((ht->array)[ind]) && (strcmp(((ht->array)[ind])->key, key) == 0))
	{
		((ht->array)[ind])->value = strdup(value);
		return (1);
	}
	newnode->next = (ht->array)[ind];
	(ht->array)[ind] = newnode;
	return (1);
}
