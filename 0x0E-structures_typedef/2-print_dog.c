#include "dog.h"

/**
  * print_dog - print struct dog.
  * @d: a pointer to the struct dog to be printed.
  *
  * Return: Nothing.
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name ? d->name : "(nil)"));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
	}
}
