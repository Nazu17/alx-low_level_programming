#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the list_t list.
 * @str: the string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = strlen(dup);
	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
