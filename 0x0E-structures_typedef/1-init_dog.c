#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Description: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}


