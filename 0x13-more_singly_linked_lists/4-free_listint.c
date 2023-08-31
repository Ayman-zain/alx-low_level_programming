#include "lists.h"

/**
 * free_listint - free a list
 * @head: the head
 * Return: void.
 *
 */
void free_listint(listint_t *head)
{
listint_t *curr;

while (head)
{
curr = head;
head = head->next;
free(curr);
}
}
