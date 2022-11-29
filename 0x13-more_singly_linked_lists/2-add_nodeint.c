#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning
 * @head: A pointer to the address of the head
 * @n: The teacher to the new node to contain
 * Return: If the function fails - NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
