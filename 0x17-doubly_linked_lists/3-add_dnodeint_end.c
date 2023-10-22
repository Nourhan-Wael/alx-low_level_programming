#include "lists.h"
/**
 * add_dnodeint_end - prints a list
 * @head: the integer to print
 * @n: the integer to print
 * Return: Nothing.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = new;
		new->prev = node;
	}
	return (new);
}
