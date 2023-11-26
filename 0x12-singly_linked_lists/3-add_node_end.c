#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: adouble pointer to the head of the sigly linked list list_t.
  * @str: the string to be add to the node will be add at the end of the list.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *temp1 = NULL;
	list_t *temp2 = NULL;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	temp2 = malloc(sizeof(list_t));
	if (temp2 == NULL)
		return (NULL);

	temp2->len = len;

	temp2->str = strdup(str);
	if (temp2 == NULL)
	{
		free(temp2);
		return (NULL);
	}
	temp2->next = NULL;

	if (*head == NULL)
	{
		*head = temp2;
		return (*head);
	}
	temp1 = *head;
	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp2;
	return (*head);
}
