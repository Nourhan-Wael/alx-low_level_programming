#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * move - check the code
 * @s2: parameter
 * Return: Always 0.
 */
char *move(char *s2)
{
if (*s2 == '*')
return (move(s2 + 1));
else
return (s2);
}

/**
 * inception - check the code
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2);
int inception(char *s1, char *s2)
{
int res = 0;

if (*s1 == 0)
return (0);
if (*s2 == *s1)
res += wildcmp(s1 + 1, s2 + 1);
return (res);
}

/**
 * wildcmp - check the code
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
int ret = 0;

if (!*s1 && *s2 == '*' && !*move(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = move(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1, s2);
return (!!ret);
}
return (0);
}

