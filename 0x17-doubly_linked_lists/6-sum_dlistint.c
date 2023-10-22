#include "lists.h"
/**
 * sum_dlistint - prints a list
 * @head: the integer to print
 * Return: Nothing.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
