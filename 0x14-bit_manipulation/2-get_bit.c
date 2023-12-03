#include "main.h"

/**
  * get_bit - gets the value of a bit at a given index.
  * @n: the number.
  * @index: the index starting from 0.
  *
  * Return: the value of bit at index indexx or -1 if and error occurd.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
}
