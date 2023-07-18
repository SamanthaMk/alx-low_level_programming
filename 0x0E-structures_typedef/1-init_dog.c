#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - The dog is initialized
 * @name: name of the dog
 * @d: pointer to struct dog thats intialized
 * @age: age of dog
 * @owner: owner of the pet dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
