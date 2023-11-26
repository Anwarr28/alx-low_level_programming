#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: apointer to a pointer pointing to the head of the list.
  * @n: the number to add to the newly add node at the end.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
		return (NULL);

	temp2->n = n;
	temp2->next = NULL;
	if (*head == NULL)
	{
		*head = temp2;
		return (*head);
	}
	temp1 = *head;
	while (temp1->next != NULL)
		temp1 = temp1->next;

	temp1->next = temp2;
	return (*head);
}
