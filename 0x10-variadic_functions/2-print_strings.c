#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check the code
 * @n: parameter
 * @separator: parameter
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;

if (n != 0)
{
va_start(args, n);
for (i = 0; i < n - 1; i++)
{
str = va_arg(args, char *);
if (str == NULL || !*str)
printf("(nil)");
else
printf("%s", str);
if (separator)
printf("%s", separator);
}
printf("%s", va_arg(args, char *));
va_end(args);
}
printf("\n");
}


