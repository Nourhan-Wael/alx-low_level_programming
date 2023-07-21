#include "main.h"

/**
* print_diagonal - ia a function
* @n: is a parameter
* Return: int
*/

void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j <= i; j++)
_putchar(' ');
}
_putchar('\n');
}

