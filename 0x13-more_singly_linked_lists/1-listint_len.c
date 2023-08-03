#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a listint_t list.
 * @h:linked list to print.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;

while (h)
{
c++;
h = h->next;
}
return (c);
}
