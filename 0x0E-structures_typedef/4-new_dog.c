#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - check the code
 * @str: parameter
 * Return: Always 0.
 */

int _strlen(const char *str)
{
int len = 0;

while (*str++)
len++;
return (len);
}


/**
 * _strcopy - check the code
 * @src: parameter
 * @dest: parameter
 * Return: Always 0.
 */

char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}


/**
 * new_dog - check the code
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}



