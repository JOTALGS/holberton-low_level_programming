#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *
new_dog(char *name, float age, char *owner)
{
	char *n_cpy;
	char *o_cpy;

	dog_t *new_d;

	n_cpy = malloc(strlen(name) + 1);
	if (!n_cpy)
		return (NULL);
	o_cpy = malloc(strlen(owner) + 1);
	if (!o_cpy)
	{
		free(n_cpy);
		return (NULL);
	}

	strcpy(n_cpy, name);
	strcpy(o_cpy, owner);

	new_d = malloc(sizeof(struct dog));
	if (!new_d)
	{
		free(o_cpy);
		free(n_cpy);
		return (NULL);
	}

	(*new_d).name = n_cpy;
	(*new_d).age = age;
	(*new_d).owner = o_cpy;

	return (new_d);
}
