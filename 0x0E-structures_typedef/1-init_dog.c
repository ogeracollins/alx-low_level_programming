#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initialize struct dog
 *@d: Pointer to struct
 *
 *@name: Name of the dog
 *@age: Age of dog
 *@owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{}

	d->name = name;
	d->age = age;
	d->owner = owner;

}
