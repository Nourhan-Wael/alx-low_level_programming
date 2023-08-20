#ifndef structure
#define structure

/**
 * struct dog - check the code
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Description: Always 0.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif

