#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * array_iterator - check the code
 * @array: parameter
 * @size: parameter
 * @action: parameter
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && size && action)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}


