#include "main.h"

/**
* _puts - ia a function
* @str: is a parameter
* Return: int
*/

void _puts(char *str)
{
int i;

for (i = 0; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}

