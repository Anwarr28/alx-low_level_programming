#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: pointer to the head of the list.
  *
  * Return: Nothing.
  */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
