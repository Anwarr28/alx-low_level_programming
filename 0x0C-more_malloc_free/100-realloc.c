#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: a pointer to the old block of memory.
  * @old_size: the old size in bytes.
  * @new_size: the new size in bytes.
  *
  * Return: a pointer to the reallocated block of memory.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		nptr = memcpy(nptr, ptr, old_size);
	}
	else
	{
		nptr = memcpy(nptr, ptr, new_size);
	}
	free(ptr);
	return (nptr);
}
