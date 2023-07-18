#include "main.h"

/**
 * print_last_digit - check the sign of the number
 * @n: is a parameter
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
if (n < 0)
n = -1 * n;
n = n % 10;
_putchar('0' + n);
return (n);
}





