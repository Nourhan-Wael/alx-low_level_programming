#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints a list
 * @n: the integer to print
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
		putchar('0');
}


