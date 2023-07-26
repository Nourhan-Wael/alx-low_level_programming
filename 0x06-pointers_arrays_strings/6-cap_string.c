#include "main.h"

/**
* isLower - ia a function
* @c: is a parameter
* Return: int
*/

int isLower(char c)
{
return (c >= 97 && c <= 122);
}


/**
* isDelimiter - ia a function
* @c: is a parameter
* Return: int
*/

int isDelimiter(char c)
{
int i;
char d[] = "\t\n,.!?\"(){}";

for (i = 0; i < 12; i++)
if (c == d[i])
return (1);
return (0);
}

/**
* cap_string - ia a function
* @s: is a parameter
* Return: int
*/

char *cap_string(char *s)
{
char *ptr = s;
int f = 1;

while (*s)
{
if (isDelimiter(*s))
f = 1;
else if (isLower(*s) && f)
{
*s -= 32;
f = 0;
}
else
f = 0;
s++;
}

return (ptr);
}


