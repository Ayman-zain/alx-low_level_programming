#ifndef DOGGY_H
#define DOGGY_H

/**
 * struct dog - a struct that stores a dog's name, age and owner's name.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the owner's name;
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typede
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
