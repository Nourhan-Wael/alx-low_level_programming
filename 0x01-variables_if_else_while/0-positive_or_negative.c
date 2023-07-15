#include <stdio.h>

void Nourhan(void)
{

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);

#endif
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
Nourhan();
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
