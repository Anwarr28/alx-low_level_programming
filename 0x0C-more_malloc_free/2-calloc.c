#include "main.h"

/**
  * _calloc - allocat memory for an array using malloc.
  * @nmemb: the number of elements in the array.
  * @size: the size of each element in bytes.
  *
  * Return: a pointer to the new allocated memory.
  *	NULL if it fails to allocat or if size || nmemb equal 0.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned char p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;
	return (ptr);
}
