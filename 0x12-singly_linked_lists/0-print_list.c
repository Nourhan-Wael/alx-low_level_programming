#include "lists.h"
/**
 * print_list - prints a list
 * @h: the integer to print
 * Return: Nothing.
 */
size_t print_list(const list_t *h)
{
	size_t cn = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cn++;
	}
	return (cn);
}

