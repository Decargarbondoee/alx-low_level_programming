#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of the list
 * @h: head of the list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
