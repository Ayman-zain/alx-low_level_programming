#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: the struct.
 * @name: name of the doog.
 * @age: age of the dog.
 * @owner: owner of the dogs.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
	d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
