#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct dog - structure for storing dogs details.
  * @name: string for the name of the dog.
  * @age: float for the age of the dog.
  * @owner: string for the owner name.
  *
  * Description: structure for storing dogs details which is
  *		the name, age and the owner of the dog.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif

