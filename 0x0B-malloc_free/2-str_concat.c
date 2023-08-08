#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: a parameter
 * @s2: a parameter
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, size1 = 0, size2 = 0;
char *m;

if (s1 == NULL || s2 == NULL)
return (NULL);

for (; s1[size1] != '\0'; size1++)
;
for (; s2[size2] != '\0'; size2++)
;
m = malloc((size1 * size2) * sizeof(char) + 1);
if (m == 0)
return (NULL);

for (; i <= size1 + size2; i++)
{
if (i < size1)
m[i] = s1[i];
else
m[i] = s2[i - size1];
}
m[i] = '\0';
return (m);
}



