#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0, j, k = 7, x;

while (i < 7)
{
j = i + 1;
while (j <= 8)
{
x = j + 1;
while (x <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(x + '0');
putchar(',');
putchar(' ');
x++;
}
j++;
}
i++;
}
while (k <= 9)
{
putchar(k + '0');
k++;
}
return (0);
}
