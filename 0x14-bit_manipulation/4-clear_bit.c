#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * clear_bit - prints a list
 * @n: the integer to print
 * @index: the integer to print
 * Return: Nothing.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}


