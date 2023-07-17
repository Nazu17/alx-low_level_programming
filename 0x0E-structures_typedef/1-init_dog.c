#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  a function that initialize a variable of type struct dog.
 * @d: the dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;

}
