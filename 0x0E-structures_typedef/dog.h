#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
  * struct dog - structure for storing dogs details.
  * @name: string for the name of the dog.
  * @age: float for the age of the dog.
  * @owner: string for the owner name.
  *
  * Description: structure for storing dogs details which is
  *		the name, age and the owner of the dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

