#include "main.h"

/**
* print_diagonal - ia a function
* @n: is a parameter
* Return: int
*/

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
else
for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}

