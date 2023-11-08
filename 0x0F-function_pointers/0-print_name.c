#include "function_pointers.h"

/**
  * print_name - prints a name.
  * @name: a string holding the name.
  * @f: a pointer to a function that takes an array of char and return nothing.
  *
  * Return: Nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
