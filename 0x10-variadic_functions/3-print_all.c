#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * format_char - check the code
 * @separator: parameter
 * @ap: parameter
 * Return: Always 0.
 */
void format_char(char *separator, va_list ap)
{
printf("%s%c", separator, va_arg(ap, int));
}


/**
 * format_int - check the code
 * @separator: parameter
 * @ap: parameter
 * Return: Always 0.
 */
void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}


/**
 * format_float - check the code
 * @separator: parameter
 * @ap: parameter
 * Return: Always 0.
 */
void format_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}


/**
 * format_string - check the code
 * @separator: parameter
 * @ap: parameter
 * Return: Always 0.
 */
void format_string(char *separator, va_list ap)
{
char *str = va_arg(ap, char *);

switch ((int)(!str))
case 1:
str = "(nil)";

printf("%s%s", separator, str);
}


/**
 * print_all - check the code
 * @format: parameter
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
char *sep = "";
int i = 0, j;
va_list ap;
token_t tokens[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};

va_start(ap, format);
while (format && format[i])
{
j = 0;
while (tokens[j].token)
{
if (format[i] == tokens[j].token[0])
{
tokens[j].f(sep, ap);
sep = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(ap);
}

