#include "dog.h"

/**
  * new_dog - creates a new dog.
  * @name: a string to the new name of the dog.
  * @age: a float number to the new age of the dog.
  * @owner: a string to the owner of the new dog.
  *
  * Return: a pointer to the struct dog. NULL if it fails.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newDog;
	dog_t *p = malloc(sizeof(newDog));
	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
