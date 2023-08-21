#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * int_index - check the code
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}



