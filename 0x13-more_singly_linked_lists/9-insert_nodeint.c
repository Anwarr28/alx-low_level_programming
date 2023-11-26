#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: a pointer to a pointer pointing to the first node of a list.
  * @idx:the index of the list where the new node should be added.
  * @n: the data to be add to the newly add node.
  *
  * Return: address of the newly added node, NULL if it failed or node can't
  *		be added.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp1 = *head;
	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		i++;
	}
	if (idx >= i)
		return (NULL);

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;

	temp2 = *head;
	if (idx == 0)
	{
		temp1->next = temp2;
		temp2 = temp1;
	}
	while (--idx > 0)
		temp2 = temp2->next;
	temp1->next = temp2->next;
	temp2->next = temp1;

	return (temp1);
}
