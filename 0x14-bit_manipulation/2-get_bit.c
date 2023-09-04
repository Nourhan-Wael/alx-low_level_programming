#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - prints a list
 * @n: the integer to print
 * @index: the integer to print
 * Return: Nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int str[100000], i = 0;

	if (index >= sizeof(n) * 8)
		return (-1);
	while (n)
	{
		str[i] = (n % 2);
		n /= 2;
		i++;
	}
	return (str[index]);
}


