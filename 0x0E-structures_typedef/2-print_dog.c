#include "dog.h"

/**
  * print_dog - print struct dog.
  * @d: a pointer to the struct dog to be printed.
  *
  * Return: Nothing.
  */
void print_dog(struct dog *d)
{
	char *s = d->name;
	char *ss = d->owner;
	float f = d->age;

	if (s == NULL)
		s = "nil";
	if (ss == NULL)
		ss = "nil";

	printf("Name: %s \nAge: %f \nOwner: %s\n", s, f, ss);
}
