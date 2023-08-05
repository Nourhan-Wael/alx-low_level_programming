#include "main.h"

/**
* _strlen - ia a function
* @s: is a parameter
* Return: int
*/

int _strlen(char *s)
{
int i, cn = 0;

for (i = 0; s[i]; i++)
cn++;
return (cn);
}

