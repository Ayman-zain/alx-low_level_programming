#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: ptr to list.
 * Return: number of printed nodes.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
char *str;
unsigned int len;

while (h)
	{
	str = h->str;
	len = h->len;
	if (!str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", len, str);
	h = h->next;
	count++;
	}
return (count);
}
