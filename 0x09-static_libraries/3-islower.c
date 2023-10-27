#include <stdio.h>
#include "main.h"

/**
  * _islower - checks for lowercase characters.
  * @c: is the character to be checked.
  *
  * Return: 1 if the letter is a lowercase 0 otherwise.
  */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
