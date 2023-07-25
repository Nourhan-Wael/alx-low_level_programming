#include "main.h"

/**
* swap_int - ia a function
* @a: is a parameter
* @b: is a parameter
* Return: int
*/

void swap_int(int *a, int *b)
{
int temp = *b;

*b = *a;
*a = temp;
}

