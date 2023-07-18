#include <stdio.h>

/**
 * main - runs the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, sum = 0;
for (i = 3 ; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d", sum);
return (0);
}






