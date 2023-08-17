#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: a parameter
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == NULL)
exit(98);
return (m);
}



