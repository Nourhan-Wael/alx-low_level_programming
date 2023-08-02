#include "main.h"

/**
* check_prime - ia a function
* @n: is a parameter
* @val: is a parameter
* Return: int
*/

int check_prime(int n, int val)
{
if (val >= n && n > 1)
return (1);
else if (n % val == 0 || n <= 1)
return (0);
else
return (check_prime(n, val + 1));
}



/**
* is_prime_number - ia a function
* @n: is a parameter
* Return: int
*/

int is_prime_number(int n)
{
return (check_prime(n, 2));
}


