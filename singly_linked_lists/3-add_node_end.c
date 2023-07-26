#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr = *head;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (!*head)
		*head = temp;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
