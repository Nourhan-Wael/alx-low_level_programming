#include "main.h"

/**
* puts_half - ia a function
* @str: is a parameter
* Return: int
*/

void puts_half(char *str)
{
int i, j, z, cn = 0;

for (j = 0; str[j]; j++)
cn++;
if (cn % 2 != 0)
{
z = ((cn - 1) / 2) + 1;
for (i = z; i < cn + 1; i++)
putchar(str[i]);
}
else
for (i = cn / 2; i < cn; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}



