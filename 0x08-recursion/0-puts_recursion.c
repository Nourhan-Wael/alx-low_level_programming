#include "main.h"

/**
* _puts_recursion - ia a function
* @s: is a parameter
* Return: int
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
putchar('\n');
else
{
putchar(*s);
_puts_recursion(s + 1);
}

}


