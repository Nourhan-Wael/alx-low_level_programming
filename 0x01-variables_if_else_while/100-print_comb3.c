#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0, j, k = 8;

while (i < 8)
{
j = i + 1;
while (j <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
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
