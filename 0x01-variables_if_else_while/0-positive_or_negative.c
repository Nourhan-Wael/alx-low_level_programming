#include <stdio.h>



/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
scanf("%d", &n);
if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d is positive\n", n);
return (0);
}
