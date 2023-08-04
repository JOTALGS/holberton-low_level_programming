#include "hash_tables.h"

unsigned long int
key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_dibj2(key) % size);
}
