#include "main.h"

/**
* _strchr - ia a function
* @s: is a parameter
* @c: is a parameter
* Return: int
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
if (s[i] == c)
{
return (s + i);
}
return ('\0');
}


