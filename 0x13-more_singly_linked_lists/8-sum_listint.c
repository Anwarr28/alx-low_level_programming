#include "lists.h"

/**
  * sum_listint - calculate the sum of all the data (n) of a listint_t list.
  * @head: a pointer to the first node of listint_t list.
  *
  * Return:the sum of all data (n) in the list, or 0 if the list is empty.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
