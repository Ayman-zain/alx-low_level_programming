#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h:linked list to print.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;

while (h)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
