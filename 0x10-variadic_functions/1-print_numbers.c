#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n: parameter
 * @separator: parameter
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n - 1; i++)
{
printf("%d", va_arg(args, int));
if (separator)
printf("%s", separator);
}
printf("%d", va_arg(args, int));
va_end(args);
printf("\n");
}


