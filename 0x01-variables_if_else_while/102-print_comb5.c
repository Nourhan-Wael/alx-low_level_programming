#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0, j = 0, x = 0, y = 0;

while (i <= 9)
{
j = 0;
while (j <= 9)
{
x = 0;
while (x <= 9)
{
y = 1;
while (y <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(x + '0');
putchar(y + '0');
if (j != 8 && i != 9)
{
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}










