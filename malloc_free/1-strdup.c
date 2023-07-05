#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - jsjdj
 * @str: stre
 * Return: bla.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(str) + 1);
	if (!new_str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i + 1] = '\0';
	return (new_str);
}
