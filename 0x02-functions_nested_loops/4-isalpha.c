#include <stdio.h>
#include "main.h"

/**
  * _isalpha - check for alphabet characters
  * @c: the character to be checked
  *
  * Return: 1 if c is a letter 0 otherwise
  */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a)' || (c <= 'Z' && c >= 'A)')
		return (1);
	else
		return (0);
}
