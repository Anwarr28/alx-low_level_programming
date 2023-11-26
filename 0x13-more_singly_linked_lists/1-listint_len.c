#include "lists.h"

/**
  * listint_len - calculate the number of elements in a linked listint_t list.
  * @h: a pointer to the head of the list.
  *
  * Return: the number of elements.
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
