#include "main.h"

/**
* _strcpy - ia a function
* @dest: is a parameter
* @src: is a parameter
* Return: int
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}



