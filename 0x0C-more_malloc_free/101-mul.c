#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts - Entry point
 * @str: a parameter
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
}

/**
 * _atoi - Entry point
 * @s: a parameter
 * Return: Always 0 (Success)
 */
int _atoi(const char *s)
{
int sign = 1;
unsigned long int resp = 0, fn, i;

for (fn = 0; !(s[fn] >= 48 && s[fn] <= 57); fn++)
{
if (s[fn] == '-')
sign *= -1;
}
for (i = fn; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
return (sign *resp);
}



/**
 * print_int - Entry point
 * @n: a parameter
 * Return: Always 0 (Success)
 */
void print_int(unsigned long int n)
{
unsigned long int divisor = 1, resp, i;

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}



/**
 * main - check the code
 * @argc: a parameter
 * @argv: a parameter
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
_puts("Error ");
exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}

