#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: a parameter
 * @size: a parameter
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
char *ptr = m;
unsigned int n = sizeof(int) * nmemb;

if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
while (n--)
*ptr++ = '0';

return (ptr);
}




