#include "main.h"

/**
* _strlen_recursion - ia a function
* @s: is a parameter
* Return: int
*/

int _strlen_recursion(char *s)
{
int cn = 0;

if (*s > '\0')
cn += _strlen_recursion(s + 1) + 1;

return (cn);

}

