#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - prints a list
 * @n: the integer to print
 * @m: the integer to print
 * Return: Nothing.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int cn = 0;

	while (x)
	{
		if (x & 1ul)
			cn++;
		x = x >> 1;
	}
	return (cn);
}


