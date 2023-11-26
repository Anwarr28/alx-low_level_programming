#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: a pointer to the first node of the list.
  *
  * Return: Nothing.
  */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
