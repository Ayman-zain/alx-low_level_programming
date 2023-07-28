#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning of a list.
 * @head: pointer to list
 * @str: string to add 
 *
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addo;
	unsigned int len = 0;

	while (str[len])
		len++;

	addo = malloc(sizeof(list_t));
	if (!addo)
		return (NULL);

	addo->str = strdup(str);
	addo->len = len;
	addo->next = (*head);
	(*head) = addo;
	return (*head);
}
