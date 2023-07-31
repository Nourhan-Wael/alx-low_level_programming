#include "main.h"

/**
* _memcpy - ia a function
* @dest: is a parameter
* @src: is a parameter
* @n: is a parameter
* Return: int
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}


