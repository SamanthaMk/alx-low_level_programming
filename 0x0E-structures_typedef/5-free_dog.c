#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function will set dogs free
 * @d:Is the struct dog to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
