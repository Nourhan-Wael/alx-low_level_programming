#include "main.h"
#include <stdlib.h>
/**
 * strlen - Entry point
 * @s: a parameter
 * Return: Always 0 (Success)
 */
int strlen(char *s)
{
int size = 0;

for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * str_concat - Entry point
 * @s1: a parameter
 * @s2: a parameter
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
int i, size1, size2;
char *m;

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";

size1 = strlen(s1);
size2 = strlen(s2);
m = malloc((size1 * size2) * sizeof(char) + 1);
if (m == 0)
return (0);

for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
m[i] = s1[i];
else
m[i] = s2[i - size1];
}
m[i] = '\0';
return (m);
}



