#include "main.h"

/**
* puts2 - ia a function
* @str: is a parameter
* Return: int
*/

void puts2(char *str)
{
int i, j, cn = 0;

for (j = 0; str[j]; j++)
cn++;
for (i = 0; i < cn; i++)
{
putchar(str[i]);
i++;
}
putchar('\n');
}



