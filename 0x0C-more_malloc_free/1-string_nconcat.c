#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: a parameter
 * @s2: a parameter
 * @n: a parameter
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *m;
unsigned int i, j, lens1, lens2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (lens1 = 0; s1[lens1] != '\0'; lens1++)
;
for (lens2 = 0; s2[lens2] != '\0'; lens2++)
;
m = malloc(lens1 + n + 1);
if (m == NULL)
return (NULL);
for (i = 0; s1[lens1] != '\0'; i++)
m[i] = s1[i];
for (j = 0; j < n; j++)
{
m[i] = s2[j];
i++;
}
m[i] = '\0';
return (m);
}




