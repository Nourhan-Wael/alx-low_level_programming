#include "main.h"

/**
* _memset - ia a function
* @s: is a parameter
* @b: is a parameter
* @n: is a parameter
* Return: int
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}


