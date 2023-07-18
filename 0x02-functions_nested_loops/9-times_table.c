#include "main.h"

/**
 * times_table - check the sign of the number
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int a, b, n;

for (a = 0; a <= 9; a++)
{
_putchar(48);
for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');

n = a * b;
if (n <= 9)
_putchar(' ');

else
_putchar((n / 10) + 48);

_putchar((n % 10) + 48);
}
_putchar('\n');
}
}



