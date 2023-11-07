#include "dog.h"

/**
  * init_dog - initialize a variable of type struct dog.
  * @d: a pointer to struct dog.
  * @name: an array of chars.
  * @age: a float for the age of the dog.
  * @owner: an array of chars for the owner name.
  *
  * Return: Nothing.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
