#include "main.h"

/**
* square - ia a function
* @n: is a parameter
* @val: is a parameter
* Return: int
*/

int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}



/**
* _sqrt_recursion - ia a function
* @n: is a parameter
* Return: int
*/

int _sqrt_recursion(int n)
{
return (square(n, 1));
}



