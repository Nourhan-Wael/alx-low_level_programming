#include "main.h"

/**
* more_numbers - ia a function
* Return: int
*/

void more_numbers(void)
{
int n, i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
n = i;
if (i > 9)
{
_putchar(1 + 48);
n = i % 10;
}
_putchar(n + 48);
}
_putchar('\n');
}
}

