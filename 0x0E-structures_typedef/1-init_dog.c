#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that returns the struct dog
 * @d: struct dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: initialization of the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d->name = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
