#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code
 * @d: parameter
 * Description: Always 0.
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
printf("Name: (nil)\n");
else if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
}

}



