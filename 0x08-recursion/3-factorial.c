#include "main.h"

/**
* factorial - ia a function
* @n: is a parameter
* Return: int
*/

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

return (n * factorial(n - 1));
}




