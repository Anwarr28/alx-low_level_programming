#include "lists.h"

/**
  * delete_nodeint_at_index - desletes the node at index @index
  *				of a listint_t linked list.
  * @head: pointer to a pointer pointing to the first node of a list.
  * @index: the number of the node to be deleted.
  *
  * Return: 1 if it success, 0 if failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted = NULL;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
		return (1);
	}
	temp = *head;
	while (--index > 0 && temp != NULL)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	deleted = temp->next;
	temp->next = temp->next->next;

	free(deleted);

	return (1);
}
