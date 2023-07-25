#include "main.h"

/**
* print_array - ia a function
* @a: is a parameter
* @n: is a parameter
* Return: int
*/

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n - 1; i++)
printf("%d, ", a[i]);
printf("%d\n", a[i]);
}


