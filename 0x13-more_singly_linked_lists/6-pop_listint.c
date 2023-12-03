#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: a pointer to a pointer pointing to the first node of a linked list.
  *
  * Return: the head node's data (n), or 0 if the list is empty.
  */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}