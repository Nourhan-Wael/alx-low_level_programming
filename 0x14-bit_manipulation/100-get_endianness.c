#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * get_endianness - prints a list
 * Return: Nothing.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}


