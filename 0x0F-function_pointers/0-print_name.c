#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_name - check the code
 * @name: parameter
 * @f: parameter
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
if (f){
f(name);
}
}

