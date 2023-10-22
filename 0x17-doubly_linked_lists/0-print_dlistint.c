#include "lists.h"
/**
 * print_dlistint - prints a list
 * @h: the integer to print
 * Return: Nothing.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
