#include "main.h"
#include <stdlib.h>
/**
 * _memset - Entry point
 * @b: a parameter
 * @n: a parameter
 * @s: a parameter
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}



/**
 * _calloc - Entry point
 * @nmemb: a parameter
 * @size: a parameter
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
_memset(m, 0, sizeof(int) * nmemb);
return (m);
}




