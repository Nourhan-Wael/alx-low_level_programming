#include "lists.h"
/**
 * free_dlistint - prints a list
 * @head: the integer to print
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	
}
