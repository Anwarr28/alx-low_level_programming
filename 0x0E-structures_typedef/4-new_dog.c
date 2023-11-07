#include "dog.h"

/**
  * _strlen - get the length of a string.
  * @s: the sting
  *
  * Return: the len.
  */
unsigned int _strlen(char *s)
{
	unsigned int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
/**
  * _strcpy - copy string from src to dest
  * @dest: the destination
  * @src: the source
  *
  * Return: dest.
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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

	p->name = malloc(_strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return(NULL);
	}
	_strcpy(p->name, name);

	p->owner = malloc(_strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return(NULL);
	}
	_strcpy(p->owner, owner);

	p->age = age;

	return (p);
}
