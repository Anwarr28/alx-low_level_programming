#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: a double pointer to the head of the linked list.
  * @str: the string to add to the node will be created.
  *
  * Return: the address of the new element, or null it it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *temp1 = NULL;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->len = len;

	temp1->str = malloc(sizeof(char) * len + 1);
	if (temp1->str == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1->str = strdup(str);

	temp1->next = *head;
	*head = temp1;
	return (*head);

}
