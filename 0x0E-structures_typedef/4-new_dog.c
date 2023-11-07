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
	dog_t *p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return(NULL);
	}
	strcpy(p->name, name);

	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return(NULL);
	}
	strcpy(p->owner, owner);

	p->age = age;

	return (p);
}
