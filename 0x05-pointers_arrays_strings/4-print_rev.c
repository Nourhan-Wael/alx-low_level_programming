#include "main.h"

/**
* print_rev - ia a function
* @s: is a parameter
* Return: int
*/

void print_rev(char *s)
{
int i, j, cn = 0;

for (i = 0; s[i]; i++)
cn++;
for (j = cn; j >= 0; j--)
_putchar(s[j]);
_putchar('\n');
}

