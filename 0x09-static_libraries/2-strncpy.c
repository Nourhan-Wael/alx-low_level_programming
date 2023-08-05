#include "main.h"

/**
* _strncpy - ia a function
* @dest: is a parameter
* @src: is a parameter
* @n: is a parameter
* Return: int
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}


