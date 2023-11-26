#include "lists.h"

/**
  * add_nodeint - adds node at the beginning of a listint_t list.
  * @head: a pointer to the pointer pointing to the head of the list.
  * @n: the number to be add to the newly add node.
  *
  * Return: apointer to the list, or NULL if it failed.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	temp->next = *head;
	*head = temp;

	return (*head);
}
