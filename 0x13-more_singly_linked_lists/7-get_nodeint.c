#include "lists.h"

/**
  * get_nodeint_at_index - find the nth node of a listint_t linked list.
  * @head: a pointer to the first node of the list.
  * @index: the representitive number of the node.
  *
  * Return: the nth node of listint_t , or NULL if the node does not exist.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int len = 0;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
