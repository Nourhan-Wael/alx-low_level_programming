#include "main.h"

/**
* _strpbrk - ia a function
* @s: is a parameter
* @accept: is a parameter
* Return: int
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
return (0);
}




