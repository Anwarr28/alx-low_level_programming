#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: a pointer to the first node of the list.
  *
  * Return: Nothing.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
