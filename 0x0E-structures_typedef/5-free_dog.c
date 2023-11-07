#include "dog.h"

/**
  * free_dog - free the allocated memo.
  * @d: a pointer to dog struct.
  *
  * Return: nothing.
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
