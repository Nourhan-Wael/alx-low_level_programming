#include "main.h"
/**
 * create_array - Entry point
 * @c: a parameter
 * @size: a parameter
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
else
{
char *ptr = malloc(size * sizeof(int));
int i;

for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
}



