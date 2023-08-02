#include "main.h"

/**
* _print_rev_recursion - ia a function
* @s: is a parameter
* Return: int
*/

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}

}


