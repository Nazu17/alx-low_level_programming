#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: a pointer to the head of the list_t list.
 * @str: the string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *last;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(last);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	last->str = dup;
	last->len = len;
	last->next = NULL;

	if (*head == NULL)
		*head = last;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = last;
	}

	return (*head);
}
