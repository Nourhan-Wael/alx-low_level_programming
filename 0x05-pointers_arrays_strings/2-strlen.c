#include "main.h"

/**
* _strlen - ia a function
* @s: is a parameter
* Return: int
*/

int _strlen(char *s)
{
int i, cn = 0;

for (i = 0; i < sizeof(s) * 2; i++)
cn++;
return (cn);
}

