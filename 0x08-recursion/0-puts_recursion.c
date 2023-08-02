#include "main.h"

/**
* _puts_recursion - ia a function
* @s: is a parameter
* Return: int
*/

void _puts_recursion(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
putchar(s[i]);
putchar('\n');
}



